def encodedChar ( str, k ) :
    expand = ""
    freq = 0
    i = 0
    while ( i < len ( str ) ) :
        temp = ""
        freq = 0
        while ( i < len ( str ) and ord ( str [ i ] ) >= ord ( 'a' ) and ord ( str [ i ] ) <= ord ( 'z' ) ) :
            temp += str [ i ]
            i += 1
        while ( i < len ( str ) and ord ( str [ i ] ) >= ord ( '1' ) and ord ( str [ i ] ) <= ord ( '9' ) ) :
            freq = freq * 10 + ord ( str [ i ] ) - ord ( '0' )
            i += 1
        for j in range ( 1, freq + 1, 1 ) :
            expand += temp
    if ( freq == 0 ) :
        expand += temp
    return expand [ k - 1 ]
