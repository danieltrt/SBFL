def findElements ( arr, n ) :
    first = - sys . maxsize
    second = - sys . maxsize
    for i in range ( 0, n ) :
        if ( arr [ i ] > first ) :
            second = first
            first = arr [ i ]
        elif ( arr [ i ] > second ) :
            second = arr [ i ]
    for i in range ( 0, n ) :
        if ( arr [ i ] < second ) :
            print ( arr [ i ], end = " " )
    
