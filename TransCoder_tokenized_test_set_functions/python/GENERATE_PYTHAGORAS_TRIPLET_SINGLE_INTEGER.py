def evaluate ( n ) :
    if ( n == 1 or n == 2 ) :
        print ( "No Pythagoras" + " Triplet exists" );
        
    elif ( n % 2 == 0 ) :
        var = n * n / 4;
        
        print ( "Pythagoras Triplets" + " exist i.e. ", end = "" );
        
        print ( int ( n ), " ", int ( var - 1 ), " ", int ( var + 1 ) );
        
    elif ( n % 2 != 0 ) :
        var = n * n + 1;
        
        print ( "Pythagoras Triplets " + "exist i.e. ", end = "" );
        
        print ( int ( n ), " ", int ( var / 2 - 1 ), " ", int ( var / 2 ) );
        
    
