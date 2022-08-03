def maxOverlap ( start, end ) :
    n = len ( start )
    maxa = max ( start )
    maxb = max ( end )
    maxc = max ( maxa, maxb )
    x = ( maxc + 2 ) * [ 0 ]
    cur = 0;
    idx = 0
    for i in range ( 0, n ) :
        x [ start [ i ] ] += 1
        x [ end [ i ] + 1 ] -= 1
    maxy = - 1
    for i in range ( 0, maxc + 1 ) :
        cur += x [ i ]
        if maxy < cur :
            maxy = cur
            idx = i
    print ( "Maximum value is: {0:d}" . format ( maxy ), " at position: {0:d}" . format ( idx ) )
