def findMinRooms ( slots, n, m ) :
    counts = [ 0 ] * m;
    
    for i in range ( n ) :
        for j in range ( m ) :
            if ( slots [ i ] [ j ] == '1' ) :
                counts [ j ] += 1;
                
    return max ( counts );
