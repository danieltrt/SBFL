def totalNodes ( adjac, n, x, y ) :
    visited = [ 0 ] * ( n + 1 )
    p = [ None ] * n
    q = queue . Queue ( )
    q . put ( x )
    visited [ x ] = True
    m = None
    while ( not q . empty ( ) ) :
        m = q . get ( )
        for i in range ( len ( adjac [ m ] ) ) :
            h = adjac [ m ] [ i ]
            if ( not visited [ h ] ) :
                visited [ h ] = True
                p [ h ] = m
                q . put ( h )
    count = 0
    i = p [ y ]
    while ( i != x ) :
        count += 1
        i = p [ i ]
    return count
