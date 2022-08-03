def findthepath ( S, v ) :
    result [ 0 ] = v
    for i in range ( 1, len ( S ) ) :
        if ( adj [ v ] [ ord ( S [ i ] ) - ord ( 'A' ) ] or adj [ ord ( S [ i ] ) - ord ( 'A' ) ] [ v ] ) :
            v = ord ( S [ i ] ) - ord ( 'A' )
        elif ( adj [ v ] [ ord ( S [ i ] ) - ord ( 'A' ) + 5 ] or adj [ ord ( S [ i ] ) - ord ( 'A' ) + 5 ] [ v ] ) :
            v = ord ( S [ i ] ) - ord ( 'A' ) + 5
        else :
            return False
        result . append ( v )
    return True
