def minAdjustmentCost ( A, n, target ) :
    dp = [ [ 0 for i in range ( M + 1 ) ] for i in range ( n ) ]
    for j in range ( M + 1 ) :
        dp [ 0 ] [ j ] = abs ( j - A [ 0 ] )
    for i in range ( 1, n ) :
        for j in range ( M + 1 ) :
            dp [ i ] [ j ] = 100000000
            for k in range ( max ( j - target, 0 ), min ( M, j + target ) + 1 ) :
                dp [ i ] [ j ] = min ( dp [ i ] [ j ], dp [ i - 1 ] [ k ] + abs ( A [ i ] - j ) )
    res = 10000000
    for j in range ( M + 1 ) :
        res = min ( res, dp [ n - 1 ] [ j ] )
    return res
