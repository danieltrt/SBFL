def distributingBalls ( k, n, string ) :
    a = [ 0 ] * MAX_CHAR
    for i in range ( n ) :
        a [ ord ( string [ i ] ) - ord ( 'a' ) ] += 1
    for i in range ( MAX_CHAR ) :
        if ( a [ i ] > k ) :
            return False
    return True
