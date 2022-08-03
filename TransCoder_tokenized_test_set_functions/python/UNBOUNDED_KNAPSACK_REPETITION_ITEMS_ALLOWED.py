def unboundedKnapsack ( W, n, val, wt ) :
    dp = [ 0 for i in range ( W + 1 ) ]
    ans = 0
    for i in range ( W + 1 ) :
        for j in range ( n ) :
            if ( wt [ j ] <= i ) :
                dp [ i ] = max ( dp [ i ], dp [ i - wt [ j ] ] + val [ j ] )
    return dp [ W ]
