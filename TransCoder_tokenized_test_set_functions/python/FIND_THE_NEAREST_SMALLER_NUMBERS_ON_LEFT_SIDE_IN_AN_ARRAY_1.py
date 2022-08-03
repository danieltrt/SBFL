def printPrevSmaller ( arr, n ) :
    S = list ( )
    for i in range ( n ) :
        while ( len ( S ) > 0 and S [ - 1 ] >= arr [ i ] ) :
            S . pop ( )
        if ( len ( S ) == 0 ) :
            print ( "_, ", end = "" )
        else :
            print ( S [ - 1 ], end = ", " )
        S . append ( arr [ i ] )
    
