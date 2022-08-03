def alternateSubarray ( arr, n ) :
    len = [ ]
    for i in range ( n + 1 ) :
        len . append ( 0 )
    len [ n - 1 ] = 1
    for i in range ( n - 2, - 1, - 1 ) :
        if ( arr [ i ] ^ arr [ i + 1 ] == True ) :
            len [ i ] = len [ i + 1 ] + 1
        else :
            len [ i ] = 1
    for i in range ( n ) :
        print ( len [ i ], " ", end = "" )
    
