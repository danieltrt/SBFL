def sumofFactors ( n ) :
    res = 1
    for i in range ( 2, int ( m . sqrt ( n ) + 1 ) ) :
        curr_sum = 1
        curr_term = 1
        while n % i == 0 :
            n = n / i;
            
            curr_term = curr_term * i;
            
            curr_sum += curr_term;
            
        res = res * curr_sum
    if n > 2 :
        res = res * ( 1 + n )
    return res;
