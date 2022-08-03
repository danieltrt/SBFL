def numofArray ( n, m ) :
    dp = [ [ 0 for i in range ( MAX ) ] for j in range ( MAX ) ]
    di = [ [ ] for i in range ( MAX ) ]
    mu = [ [ ] for i in range ( MAX ) ]
    for i in range ( 1, m + 1 ) :
        for j in range ( 2 * i, m + 1, i ) :
            di [ j ] . append ( i )
            mu [ i ] . append ( j )
        di [ i ] . append ( i )
    for i in range ( 1, m + 1 ) :
        dp [ 1 ] [ i ] = 1
    for i in range ( 2, n + 1 ) :
        for j in range ( 1, m + 1 ) :
            dp [ i ] [ j ] = 0
            for x in di [ j ] :
                dp [ i ] [ j ] += dp [ i - 1 ] [ x ]
            for x in mu [ j ] :
                dp [ i ] [ j ] += dp [ i - 1 ] [ x ]
    ans = 0
    for i in range ( 1, m + 1 ) :
        ans += dp [ n ] [ i ]
        di [ i ] . clear ( )
        mu [ i ] . clear ( )
    return ans
