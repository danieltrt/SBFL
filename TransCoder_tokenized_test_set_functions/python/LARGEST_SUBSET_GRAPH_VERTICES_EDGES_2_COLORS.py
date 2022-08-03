def subsetGraph ( C ) :
    global N
    vertices = set ( )
    for i in range ( N ) :
        vertices . add ( i )
    while ( len ( vertices ) != 0 ) :
        if ( len ( vertices ) == 1 ) :
            return 1
        someone_removed = False
        for x in vertices :
            values = set ( )
            for y in vertices :
                if ( y != x ) :
                    values . add ( C [ x ] [ y ] )
            if ( len ( values ) == 1 ) :
                vertices . remove ( x )
                someone_removed = True
                break
        if ( not someone_removed ) :
            break
    return len ( vertices )
