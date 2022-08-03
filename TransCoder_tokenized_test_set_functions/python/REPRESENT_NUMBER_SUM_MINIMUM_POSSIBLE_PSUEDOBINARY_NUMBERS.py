def psuedoBinary ( n ) :
    while ( n > 0 ) :
        temp = n;
        
        m = 0;
        
        p = 1;
        
        while ( temp ) :
            rem = temp % 10;
            
            temp = int ( temp / 10 );
            
            if ( rem != 0 ) :
                m += p;
                
            p *= 10;
            
        print ( m, end = " " );
        
        n = n - m;
        
    
