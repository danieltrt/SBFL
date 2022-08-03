def subsetDifference ( n ) :
    s = int ( n * ( n + 1 ) / 2 )
    if n % 4 == 0 :
        print ( "First subset sum = ", int ( s / 2 ) )
        print ( "Second subset sum = ", int ( s / 2 ) )
        print ( "Difference = ", 0 )
    else :
        if n % 4 == 1 or n % 4 == 2 :
            print ( "First subset sum = ", int ( s / 2 ) )
            print ( "Second subset sum = ", int ( s / 2 ) + 1 )
            print ( "Difference = ", 1 )
        else :
            print ( "First subset sum = ", int ( s / 2 ) )
            print ( "Second subset sum = ", int ( s / 2 ) )
            print ( "Difference = ", 0 )
    
