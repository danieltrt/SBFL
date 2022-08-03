def findRepeatFirst ( s ) :
    p = - 1
    hash = [ 0 for i in range ( MAX_CHAR ) ]
    pos = [ 0 for i in range ( MAX_CHAR ) ]
    for i in range ( len ( s ) ) :
        k = ord ( s [ i ] )
        if ( hash [ k ] == 0 ) :
            hash [ k ] += 1
            pos [ k ] = i
        elif ( hash [ k ] == 1 ) :
            hash [ k ] += 1
    for i in range ( MAX_CHAR ) :
        if ( hash [ i ] == 2 ) :
            if ( p == - 1 ) :
                p = pos [ i ]
            elif ( p > pos [ i ] ) :
                p = pos [ i ]
    return p
