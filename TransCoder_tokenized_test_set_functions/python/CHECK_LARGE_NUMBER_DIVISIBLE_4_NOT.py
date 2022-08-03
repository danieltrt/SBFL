def check ( st ) :
    n = len ( st )
    if ( n == 0 ) :
        return False
    if ( n == 1 ) :
        return ( ( st [ 0 ] - '0' ) % 4 == 0 )
    last = ( int ) ( st [ n - 1 ] )
    second_last = ( int ) ( st [ n - 2 ] )
    return ( ( second_last * 10 + last ) % 4 == 0 )
