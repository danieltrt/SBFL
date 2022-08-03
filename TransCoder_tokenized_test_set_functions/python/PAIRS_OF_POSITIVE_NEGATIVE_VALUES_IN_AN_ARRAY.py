def printPairs ( arr, n ) :
    v = [ ]
    for i in range ( n ) :
        for j in range ( i + 1, n ) :
            if ( abs ( arr [ i ] ) == abs ( arr [ j ] ) ) :
                v . append ( abs ( arr [ i ] ) )
    if ( len ( v ) == 0 ) :
        return;
        
    v . sort ( )
    for i in range ( len ( v ) ) :
        print ( - v [ i ], "", v [ i ], end = " " )
    
