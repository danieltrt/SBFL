def leonardo ( n ) :
    if ( n == 0 or n == 1 ) :
        return 1
    return ( leonardo ( n - 1 ) + leonardo ( n - 2 ) + 1 );
