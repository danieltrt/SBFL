def translate ( st ) :
    l = len ( st )
    if ( l < 2 ) :
        return
    i = 0
    j = 0
    while ( j < l - 1 ) :
        if ( st [ j ] == 'A' and st [ j + 1 ] == 'B' ) :
            j += 2
            st [ i ] = 'C'
            i += 1
            continue
        st [ i ] = st [ j ]
        i += 1
        j += 1
    if ( j == l - 1 ) :
        st [ i ] = st [ j ]
        i += 1
    st [ i ] = ' '
    st [ l - 1 ] = ' '
