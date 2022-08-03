def findLargestPlus ( mat ) :
    left = [ [ 0 for x in range ( N ) ] for y in range ( N ) ]
    right = [ [ 0 for x in range ( N ) ] for y in range ( N ) ]
    top = [ [ 0 for x in range ( N ) ] for y in range ( N ) ]
    bottom = [ [ 0 for x in range ( N ) ] for y in range ( N ) ]
    for i in range ( N ) :
        top [ 0 ] [ i ] = mat [ 0 ] [ i ]
        bottom [ N - 1 ] [ i ] = mat [ N - 1 ] [ i ]
        left [ i ] [ 0 ] = mat [ i ] [ 0 ]
        right [ i ] [ N - 1 ] = mat [ i ] [ N - 1 ]
    for i in range ( N ) :
        for j in range ( 1, N ) :
            if ( mat [ i ] [ j ] == 1 ) :
                left [ i ] [ j ] = left [ i ] [ j - 1 ] + 1
            else :
                left [ i ] [ j ] = 0
            if ( mat [ j ] [ i ] == 1 ) :
                top [ j ] [ i ] = top [ j - 1 ] [ i ] + 1
            else :
                top [ j ] [ i ] = 0
            j = N - 1 - j
            if ( mat [ j ] [ i ] == 1 ) :
                bottom [ j ] [ i ] = bottom [ j + 1 ] [ i ] + 1
            else :
                bottom [ j ] [ i ] = 0
            if ( mat [ i ] [ j ] == 1 ) :
                right [ i ] [ j ] = right [ i ] [ j + 1 ] + 1
            else :
                right [ i ] [ j ] = 0
            j = N - 1 - j
    n = 0
    for i in range ( N ) :
        for j in range ( N ) :
            l = min ( min ( top [ i ] [ j ], bottom [ i ] [ j ] ), min ( left [ i ] [ j ], right [ i ] [ j ] ) )
            if ( l > n ) :
                n = l
    if ( n ) :
        return 4 * ( n - 1 ) + 1
    return 0
