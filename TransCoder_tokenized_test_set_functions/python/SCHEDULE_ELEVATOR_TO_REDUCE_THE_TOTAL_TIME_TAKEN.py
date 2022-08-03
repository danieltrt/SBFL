def minTime ( n, k, a ) :
    a . sort ( reverse = True );
    
    minTime = 0;
    
    for i in range ( 0, n, k ) :
        minTime += ( 2 * a [ i ] );
        
    return minTime;
