def maximumSum ( a, n ) :
    global M;
    
    for i in range ( 0, n ) :
        a [ i ] . sort ( );
        
    sum = a [ n - 1 ] [ M - 1 ];
    
    prev = a [ n - 1 ] [ M - 1 ];
    
    for i in range ( n - 2, - 1, - 1 ) :
        for j in range ( M - 1, - 1, - 1 ) :
            if ( a [ i ] [ j ] < prev ) :
                prev = a [ i ] [ j ];
                
                sum += prev;
                
                break;
                
        if ( j == - 1 ) :
            return 0;
            
    return sum;
