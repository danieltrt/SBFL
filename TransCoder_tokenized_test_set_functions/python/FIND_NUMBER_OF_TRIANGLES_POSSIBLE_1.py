def CountTriangles ( A ) :
    n = len ( A );
    
    A . sort ( );
    
    count = 0;
    
    for i in range ( n - 1, 0, - 1 ) :
        l = 0;
        
        r = i - 1;
        
        while ( l < r ) :
            if ( A [ l ] + A [ r ] > A [ i ] ) :
                count += r - l;
                
                r -= 1;
                
            else :
                l += 1;
                
    print ( "No of possible solutions: ", count );
