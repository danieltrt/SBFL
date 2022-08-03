def rotateMatrix ( mat ) :
    i = N - 1;
    
    while ( i >= 0 ) :
        j = N - 1;
        
        while ( j >= 0 ) :
            print ( mat [ i ] [ j ], end = " " );
            
            j = j - 1;
            
        print ( );
        
        i = i - 1;
        
    
