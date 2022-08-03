def maxSubsequenceSubstring ( x, y, n, m ) :
    dp = [ [ 0 for i in range ( MAX ) ] for i in range ( MAX ) ]
    for i in range ( 1, m + 1 ) :
        for j in range ( 1, n + 1 ) :
            if ( x [ j - 1 ] == y [ i - 1 ] ) :
                dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ]
            else :
                dp [ i ] [ j ] = dp [ i ] [ j - 1 ]
    ans = 0
    for i in range ( 1, m + 1 ) :
        ans = max ( ans, dp [ i ] [ n ] )
    return ans
