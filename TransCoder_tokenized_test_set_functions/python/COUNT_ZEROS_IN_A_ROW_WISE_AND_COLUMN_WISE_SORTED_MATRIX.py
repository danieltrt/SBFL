def countZeroes ( mat ) :
    N = 5;
    
    row = N - 1;
    
    col = 0;
    
    count = 0;
    
    while ( col < N ) :
        while ( mat [ row ] [ col ] ) :
            if ( row < 0 ) :
                return count;
                
            row = row - 1;
            
        count = count + ( row + 1 );
        
        col = col + 1;
        
    return count;
