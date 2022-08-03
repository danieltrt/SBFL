def cosXSertiesSum ( x, n ) :
    x = x * ( PI / 180.0 );
    
    res = 1;
    
    sign = 1;
    
    fact = 1;
    
    pow = 1;
    
    for i in range ( 1, 5 ) :
        sign = sign * - 1;
        
        fact = fact * ( 2 * i - 1 ) * ( 2 * i );
        
        pow = pow * x * x;
        
        res = res + sign * pow / fact;
        
    return res;
