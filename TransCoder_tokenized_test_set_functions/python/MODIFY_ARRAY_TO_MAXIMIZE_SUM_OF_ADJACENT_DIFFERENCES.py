def maximumDifferenceSum ( arr, N ) :
    dp = [ [ 0, 0 ] for i in range ( N ) ]
    for i in range ( N ) :
        dp [ i ] [ 0 ] = dp [ i ] [ 1 ] = 0
    for i in range ( N - 1 ) :
        dp [ i + 1 ] [ 0 ] = max ( dp [ i ] [ 0 ], dp [ i ] [ 1 ] + abs ( 1 - arr [ i ] ) )
        dp [ i + 1 ] [ 1 ] = max ( dp [ i ] [ 0 ] + abs ( arr [ i + 1 ] - 1 ), dp [ i ] [ 1 ] + abs ( arr [ i + 1 ] - arr [ i ] ) )
    return max ( dp [ N - 1 ] [ 0 ], dp [ N - 1 ] [ 1 ] )
