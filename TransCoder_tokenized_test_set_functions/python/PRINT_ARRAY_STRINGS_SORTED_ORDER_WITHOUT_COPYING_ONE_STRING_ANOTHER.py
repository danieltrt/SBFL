def printInSortedOrder ( arr, n ) :
    index = [ 0 ] * n
    for i in range ( n ) :
        index [ i ] = i
    for i in range ( n - 1 ) :
        min = i
        for j in range ( i + 1, n ) :
            if ( arr [ index [ min ] ] > arr [ index [ j ] ] ) :
                min = j
        if ( min != i ) :
            index [ min ], index [ i ] = index [ i ], index [ min ]
    for i in range ( n ) :
        print ( arr [ index [ i ] ], end = " " )
    
