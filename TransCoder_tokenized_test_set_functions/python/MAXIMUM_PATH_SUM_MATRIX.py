def findMaxPath ( mat ) :
    res = - 1
    for i in range ( M ) :
        res = max ( res, mat [ 0 ] [ i ] )
    for i in range ( 1, N ) :
        res = - 1
        for j in range ( M ) :
            if ( j > 0 and j < M - 1 ) :
                mat [ i ] [ j ] += max ( mat [ i - 1 ] [ j ], max ( mat [ i - 1 ] [ j - 1 ], mat [ i - 1 ] [ j + 1 ] ) )
            elif ( j > 0 ) :
                mat [ i ] [ j ] += max ( mat [ i - 1 ] [ j ], mat [ i - 1 ] [ j - 1 ] )
            elif ( j < M - 1 ) :
                mat [ i ] [ j ] += max ( mat [ i - 1 ] [ j ], mat [ i - 1 ] [ j + 1 ] )
            res = max ( mat [ i ] [ j ], res )
    return res
