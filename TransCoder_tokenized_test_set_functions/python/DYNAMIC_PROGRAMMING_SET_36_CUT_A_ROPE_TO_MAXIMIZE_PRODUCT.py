def maxProd ( n ) :
    if ( n == 0 or n == 1 ) :
        return 0
    max_val = 0
    for i in range ( 1, n - 1 ) :
        max_val = max ( max_val, max ( i * ( n - i ), maxProd ( n - i ) * i ) )
    return max_val;
