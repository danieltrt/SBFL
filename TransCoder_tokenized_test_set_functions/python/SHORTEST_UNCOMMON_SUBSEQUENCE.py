def shortestSeq ( S : list, T : list ) :
    m = len ( S )
    n = len ( T )
    dp = [ [ 0 for i in range ( n + 1 ) ] for j in range ( m + 1 ) ]
    for i in range ( m + 1 ) :
        dp [ i ] [ 0 ] = 1
    for i in range ( n + 1 ) :
        dp [ 0 ] [ i ] = MAX
    for i in range ( 1, m + 1 ) :
        for j in range ( 1, n + 1 ) :
            ch = S [ i - 1 ]
            k = j - 1
            while k >= 0 :
                if T [ k ] == ch :
                    break
                k -= 1
            if k == - 1 :
                dp [ i ] [ j ] = 1
            else :
                dp [ i ] [ j ] = min ( dp [ i - 1 ] [ j ], dp [ i - 1 ] [ k ] + 1 )
    ans = dp [ m ] [ n ]
    if ans >= MAX :
        ans = - 1
    return ans
