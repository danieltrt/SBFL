def printFirstNegativeInteger ( arr, n, k ) :
    Di = deque ( )
    for i in range ( k ) :
        if ( arr [ i ] < 0 ) :
            Di . append ( i );
            
    for i in range ( k, n ) :
        if ( not Di ) :
            print ( 0, end = ' ' )
        else :
            print ( arr [ Di [ 0 ] ], end = ' ' );
            
        while Di and Di [ 0 ] <= ( i - k ) :
            Di . popleft ( )
        if ( arr [ i ] < 0 ) :
            Di . append ( i );
            
    if not Di :
        print ( 0 )
    else :
        print ( arr [ Di [ 0 ] ], end = " " )
    
