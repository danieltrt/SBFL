def shortestPath ( graph, u, v, k ) :
    V = 4
    INF = 999999999999
    if k == 0 and u == v :
        return 0
    if k == 1 and graph [ u ] [ v ] != INF :
        return graph [ u ] [ v ]
    if k <= 0 :
        return INF
    res = INF
    for i in range ( V ) :
        if graph [ u ] [ i ] != INF and u != i and v != i :
            rec_res = shortestPath ( graph, i, v, k - 1 )
            if rec_res != INF :
                res = min ( res, graph [ u ] [ i ] + rec_res )
    return res
