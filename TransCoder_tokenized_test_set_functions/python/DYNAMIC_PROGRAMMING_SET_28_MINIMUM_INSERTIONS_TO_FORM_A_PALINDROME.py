def findMinInsertions ( str, l, h ) :
    if ( l > h ) :
        return sys . maxsize
    if ( l == h ) :
        return 0
    if ( l == h - 1 ) :
        return 0 if ( str [ l ] == str [ h ] ) else 1
    if ( str [ l ] == str [ h ] ) :
        return findMinInsertions ( str, l + 1, h - 1 )
    else :
        return ( min ( findMinInsertions ( str, l, h - 1 ), findMinInsertions ( str, l + 1, h ) ) + 1 )
    
