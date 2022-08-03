def countwalks ( graph, u, v, k ) :
    if ( k == 0 and u == v ) :
        return 1
    if ( k == 1 and graph [ u ] [ v ] ) :
        return 1
    if ( k <= 0 ) :
        return 0
    count = 0
    for i in range ( 0, V ) :
        if ( graph [ u ] [ i ] == 1 ) :
            count += countwalks ( graph, i, v, k - 1 )
    return count
