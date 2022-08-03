def FirstRepeated ( string ) :
    checker = 0
    pos = 0
    for i in string :
        val = ord ( i ) - ord ( 'a' );
        
        if ( ( checker & ( 1 << val ) ) > 0 ) :
            return pos
        checker |= ( 1 << val )
        pos += 1
    return - 1
