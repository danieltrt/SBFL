def shortestPath ( graph, u, v, k ) :
    global V, INF
    sp = [ [ None ] * V for i in range ( V ) ]
    for i in range ( V ) :
        for j in range ( V ) :
            sp [ i ] [ j ] = [ None ] * ( k + 1 )
    for e in range ( k + 1 ) :
        for i in range ( V ) :
            for j in range ( V ) :
                sp [ i ] [ j ] [ e ] = INF
                if ( e == 0 and i == j ) :
                    sp [ i ] [ j ] [ e ] = 0
                if ( e == 1 and graph [ i ] [ j ] != INF ) :
                    sp [ i ] [ j ] [ e ] = graph [ i ] [ j ]
                if ( e > 1 ) :
                    for a in range ( V ) :
                        if ( graph [ i ] [ a ] != INF and i != a and j != a and sp [ a ] [ j ] [ e - 1 ] != INF ) :
                            sp [ i ] [ j ] [ e ] = min ( sp [ i ] [ j ] [ e ], graph [ i ] [ a ] + sp [ a ] [ j ] [ e - 1 ] )
    return sp [ u ] [ v ] [ k ]
