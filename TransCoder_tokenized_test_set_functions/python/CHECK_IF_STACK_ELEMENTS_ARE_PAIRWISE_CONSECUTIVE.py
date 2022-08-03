def pairWiseConsecutive ( s ) :
    aux = [ ]
    while ( len ( s ) != 0 ) :
        aux . append ( s [ - 1 ] )
        s . pop ( )
    result = True
    while ( len ( aux ) > 1 ) :
        x = aux [ - 1 ]
        aux . pop ( )
        y = aux [ - 1 ]
        aux . pop ( )
        if ( abs ( x - y ) != 1 ) :
            result = False
        s . append ( x )
        s . append ( y )
    if ( len ( aux ) == 1 ) :
        s . append ( aux [ - 1 ] )
    return result
