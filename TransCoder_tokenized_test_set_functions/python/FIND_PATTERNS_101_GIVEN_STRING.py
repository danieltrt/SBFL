def patternCount ( str ) :
    last = str [ 0 ]
    i = 1;
    counter = 0
    while ( i < len ( str ) ) :
        if ( str [ i ] == '0' and last == '1' ) :
            while ( str [ i ] == '0' ) :
                i += 1
                if ( str [ i ] == '1' ) :
                    counter += 1
        last = str [ i ]
        i += 1
    return counter
