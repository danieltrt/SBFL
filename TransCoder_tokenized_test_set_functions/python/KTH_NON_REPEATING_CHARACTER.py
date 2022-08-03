def kthNonRepeating ( str, k ) :
    n = len ( str )
    count = [ 0 ] * MAX_CHAR
    index = [ 0 ] * MAX_CHAR
    for i in range ( MAX_CHAR ) :
        count [ i ] = 0
        index [ i ] = n
    for i in range ( n ) :
        x = str [ i ]
        count [ ord ( x ) ] += 1
        if ( count [ ord ( x ) ] == 1 ) :
            index [ ord ( x ) ] = i
        if ( count [ ord ( x ) ] == 2 ) :
            index [ ord ( x ) ] = n
    index . sort ( )
    return index [ k - 1 ] if ( index [ k - 1 ] != n ) else - 1
