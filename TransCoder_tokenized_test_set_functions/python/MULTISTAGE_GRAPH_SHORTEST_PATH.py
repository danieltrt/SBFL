def shortestDist ( graph ) :
    global INF
    dist = [ 0 ] * N
    dist [ N - 1 ] = 0
    for i in range ( N - 2, - 1, - 1 ) :
        dist [ i ] = INF
        for j in range ( N ) :
            if graph [ i ] [ j ] == INF :
                continue
            dist [ i ] = min ( dist [ i ], graph [ i ] [ j ] + dist [ j ] )
    return dist [ 0 ]
