def stringReduction ( str ) :
    n = len ( str )
    count = [ 0 ] * 3
    for i in range ( n ) :
        count [ ord ( str [ i ] ) - ord ( 'a' ) ] += 1
    if ( count [ 0 ] == n or count [ 1 ] == n or count [ 2 ] == n ) :
        return n
    if ( ( count [ 0 ] % 2 ) == ( count [ 1 ] % 2 ) and ( count [ 1 ] % 2 ) == ( count [ 2 ] % 2 ) ) :
        return 2
    return 1
