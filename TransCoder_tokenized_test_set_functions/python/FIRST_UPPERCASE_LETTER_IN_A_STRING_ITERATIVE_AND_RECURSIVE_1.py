def first ( str, i ) :
    if ( str [ i ] == '\0' ) :
        return 0
    if ( str [ i ] . isupper ( ) ) :
        return str [ i ]
    return first ( str, i + 1 )
