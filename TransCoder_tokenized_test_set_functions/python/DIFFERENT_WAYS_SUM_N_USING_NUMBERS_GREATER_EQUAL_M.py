def numberofways ( n, m ) :
    dp = np . zeros ( ( n + 2, n + 2 ) )
    dp [ 0 ] [ n + 1 ] = 1
    for k in range ( n, m - 1, - 1 ) :
        for i in range ( n + 1 ) :
            dp [ i ] [ k ] = dp [ i ] [ k + 1 ]
            if ( i - k >= 0 ) :
                dp [ i ] [ k ] = ( dp [ i ] [ k ] + dp [ i - k ] [ k ] )
    return dp [ n ] [ m ]
