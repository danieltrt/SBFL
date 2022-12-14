def countManipulations ( s1, s2 ) :
    count = 0
    char_count = [ 0 ] * 26
    for i in range ( 26 ) :
        char_count [ i ] = 0
    for i in range ( len ( s1 ) ) :
        char_count [ ord ( s1 [ i ] ) - ord ( 'a' ) ] += 1
    for i in range ( len ( s2 ) ) :
        char_count [ ord ( s2 [ i ] ) - ord ( 'a' ) ] -= 1
        if ( char_count [ ord ( s2 [ i ] ) - ord ( 'a' ) ] < 0 ) :
            count += 1
    return count
