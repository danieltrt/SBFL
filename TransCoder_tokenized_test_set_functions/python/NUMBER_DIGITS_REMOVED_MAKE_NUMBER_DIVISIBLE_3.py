def divisible ( num ) :
    n = len ( num );
    
    sum = 0;
    
    for i in range ( n ) :
        sum += int ( num [ i ] );
        
    if ( sum % 3 == 0 ) :
        return 0;
        
    if ( n == 1 ) :
        return - 1;
        
    for i in range ( n ) :
        if ( sum % 3 == int ( num [ i ] ) % 3 ) :
            return 1;
            
    if ( n == 2 ) :
        return - 1;
        
    return 2;
