def findmin ( p, n ) :
    a, b, c, d = 0, 0, 0, 0
    for i in range ( n ) :
        if ( p [ i ] [ 0 ] <= 0 ) :
            a += 1
        elif ( p [ i ] [ 0 ] >= 0 ) :
            b += 1
        if ( p [ i ] [ 1 ] >= 0 ) :
            c += 1
        elif ( p [ i ] [ 1 ] <= 0 ) :
            d += 1
    return min ( [ a, b, c, d ] )
