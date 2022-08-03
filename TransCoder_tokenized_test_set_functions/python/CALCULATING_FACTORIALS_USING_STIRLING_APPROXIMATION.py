def stirlingFactorial ( n ) :
    if ( n == 1 ) :
        return 1;
        
    e = 2.71;
    
    z = ( math . sqrt ( 2 * 3.14 * n ) * math . pow ( ( n / e ), n ) );
    
    return math . floor ( z );
