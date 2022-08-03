def KnapSack ( val, wt, n, W ) :
    dp = [ 0 ] * ( W + 1 );
    
    for i in range ( n ) :
        for j in range ( W, wt [ i ], - 1 ) :
            dp [ j ] = max ( dp [ j ], val [ i ] + dp [ j - wt [ i ] ] );
            
    return dp [ W ];
