def findPossibleMoves ( mat, p, q ) :
    global n, m;
    
    X = [ 2, 1, - 1, - 2, - 2, - 1, 1, 2 ];
    
    Y = [ 1, 2, 2, 1, - 1, - 2, - 2, - 1 ];
    
    count = 0;
    
    for i in range ( 8 ) :
        x = p + X [ i ];
        
        y = q + Y [ i ];
        
        if ( x >= 0 and y >= 0 and x < n and y < m and mat [ x ] [ y ] == 0 ) :
            count += 1;
            
    return count;
