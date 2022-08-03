def maxSum ( mat, n ) :
    if n == 1 :
        return mat [ 0 ] [ 0 ]
    dp = [ [ 0 for i in range ( n ) ] for i in range ( n ) ]
    maxSum = INT_MIN
    for j in range ( n ) :
        dp [ n - 1 ] [ j ] = mat [ n - 1 ] [ j ]
    for i in range ( n - 2, - 1, - 1 ) :
        for j in range ( n ) :
            maxi = INT_MIN
            if ( ( ( ( j - 1 ) >= 0 ) and ( maxi < dp [ i + 1 ] [ j - 1 ] ) ) ) :
                maxi = dp [ i + 1 ] [ j - 1 ]
            if ( ( ( ( j + 1 ) < n ) and ( maxi < dp [ i + 1 ] [ j + 1 ] ) ) ) :
                maxi = dp [ i + 1 ] [ j + 1 ]
            dp [ i ] [ j ] = mat [ i ] [ j ] + maxi
    for j in range ( n ) :
        if ( maxSum < dp [ 0 ] [ j ] ) :
            maxSum = dp [ 0 ] [ j ]
    return maxSum
