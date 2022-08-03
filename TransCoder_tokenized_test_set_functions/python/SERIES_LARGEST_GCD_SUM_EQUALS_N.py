def print_sequence ( n, k ) :
    b = int ( n / ( k * ( k + 1 ) / 2 ) );
    
    if b == 0 :
        print ( "-1" )
    else :
        r = 1;
        
        x = 1
        while x * * 2 <= n :
            if n % x != 0 :
                continue;
                
            elif x <= b and x > r :
                r = x
            elif n / x <= b and n / x > r :
                r = n / x
            x = x + 1
        i = 1
        while i < k :
            print ( r * i, end = " " )
            i = i + 1
        last_term = n - ( r * ( k * ( k - 1 ) / 2 ) )
        print ( last_term )
    
