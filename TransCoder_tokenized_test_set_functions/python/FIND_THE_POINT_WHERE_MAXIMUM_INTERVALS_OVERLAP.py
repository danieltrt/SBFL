def findMaxGuests ( arrl, exit, n ) :
    arrl . sort ( );
    
    exit . sort ( );
    
    guests_in = 1;
    
    max_guests = 1;
    
    time = arrl [ 0 ];
    
    i = 1;
    
    j = 0;
    
    while ( i < n and j < n ) :
        if ( arrl [ i ] <= exit [ j ] ) :
            guests_in = guests_in + 1;
            
            if ( guests_in > max_guests ) :
                max_guests = guests_in;
                
                time = arrl [ i ];
                
            i = i + 1;
            
        else :
            guests_in = guests_in - 1;
            
            j = j + 1;
            
    print ( "Maximum Number of Guests =", max_guests, "at time", time )
