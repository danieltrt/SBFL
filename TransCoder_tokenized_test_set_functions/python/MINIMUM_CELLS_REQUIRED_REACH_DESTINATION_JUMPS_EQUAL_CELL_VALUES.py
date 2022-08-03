def minCells ( mat, m, n ) :
    dp = [ [ MAX for i in range ( n ) ] for i in range ( m ) ]
    dp [ 0 ] [ 0 ] = 1
    for i in range ( m ) :
        for j in range ( n ) :
            if ( dp [ i ] [ j ] != MAX and ( j + mat [ i ] [ j ] ) < n and ( dp [ i ] [ j ] + 1 ) < dp [ i ] [ j + mat [ i ] [ j ] ] ) :
                dp [ i ] [ j + mat [ i ] [ j ] ] = dp [ i ] [ j ] + 1
            if ( dp [ i ] [ j ] != MAX and ( i + mat [ i ] [ j ] ) < m and ( dp [ i ] [ j ] + 1 ) < dp [ i + mat [ i ] [ j ] ] [ j ] ) :
                dp [ i + mat [ i ] [ j ] ] [ j ] = dp [ i ] [ j ] + 1
    if ( dp [ m - 1 ] [ n - 1 ] != MAX ) :
        return dp [ m - 1 ] [ n - 1 ]
    return - 1
