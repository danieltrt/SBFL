def minCost ( cost ) :
    dist = [ 0 for i in range ( N ) ]
    for i in range ( N ) :
        dist [ i ] = INF
    dist [ 0 ] = 0
    for i in range ( N ) :
        for j in range ( i + 1, N ) :
            if ( dist [ j ] > dist [ i ] + cost [ i ] [ j ] ) :
                dist [ j ] = dist [ i ] + cost [ i ] [ j ]
    return dist [ N - 1 ]
