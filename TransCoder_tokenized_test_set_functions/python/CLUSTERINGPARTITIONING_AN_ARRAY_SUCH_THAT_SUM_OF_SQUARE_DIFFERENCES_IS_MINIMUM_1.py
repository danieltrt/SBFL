def minCost ( a, n, k ) :
    dp = [ [ inf for i in range ( k + 1 ) ] for j in range ( n + 1 ) ];
    
    dp [ 0 ] [ 0 ] = 0;
    
    for i in range ( 1, n + 1 ) :
        for j in range ( 1, k + 1 ) :
            for m in range ( i - 1, - 1, - 1 ) :
                dp [ i ] [ j ] = min ( dp [ i ] [ j ], dp [ m ] [ j - 1 ] + ( a [ i - 1 ] - a [ m ] ) * ( a [ i - 1 ] - a [ m ] ) );
                
    return dp [ n ] [ k ];
