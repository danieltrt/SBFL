def findRepeating ( arr, n ) :
    missingElement = 0
    for i in range ( 0, n ) :
        element = arr [ abs ( arr [ i ] ) ]
        if ( element < 0 ) :
            missingElement = arr [ i ]
            break
        arr [ abs ( arr [ i ] ) ] = - arr [ abs ( arr [ i ] ) ]
    return abs ( missingElement )
