def substringConversions ( s, k, b ) :
    l = len ( s );
    
    for i in range ( l ) :
        if ( ( i + k ) < l + 1 ) :
            sub = s [ i : i + k ];
            
            sum, counter = 0, 0;
            
            for i in range ( len ( sub ) - 1, - 1, - 1 ) :
                sum = sum + ( ( ord ( sub [ i ] ) - ord ( '0' ) ) * pow ( b, counter ) );
                
                counter += 1;
                
            print ( sum, end = " " );
            
    
