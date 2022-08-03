def ksmallest ( arr, n, k ) :
    b = [ 0 ] * MAX;
    
    for i in range ( n ) :
        b [ arr [ i ] ] = 1;
        
    for j in range ( 1, MAX ) :
        if ( b [ j ] != 1 ) :
            k -= 1;
            
        if ( k is not 1 ) :
            return j;
            
    
