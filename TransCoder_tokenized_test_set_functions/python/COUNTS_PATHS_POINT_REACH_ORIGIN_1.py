def countPaths ( n, m ) :
    if ( n == 0 or m == 0 ) :
        return 1
    return ( countPaths ( n - 1, m ) + countPaths ( n, m - 1 ) )
