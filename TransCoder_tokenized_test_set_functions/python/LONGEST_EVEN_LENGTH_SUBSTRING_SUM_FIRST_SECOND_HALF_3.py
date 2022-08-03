def findLength ( st, n ) :
    total = [ 0 ] * ( n + 1 )
    for i in range ( 1, n + 1 ) :
        total [ i ] = ( total [ i - 1 ] + int ( st [ i - 1 ] ) - int ( '0' ) )
    ans = 0
    l = 2
    while ( l <= n ) :
        for i in range ( n - l + 1 ) :
            j = i + l - 1
            if ( total [ i + int ( l / 2 ) ] - total [ i ] == total [ i + l ] - total [ i + int ( l / 2 ) ] ) :
                ans = max ( ans, l )
        l = l + 2
    return ans
