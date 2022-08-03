def printDistinct ( arr, n ) :
    s = dict ( );
    
    for i in range ( n ) :
        if ( arr [ i ] not in s . keys ( ) ) :
            s [ arr [ i ] ] = arr [ i ];
            
            print ( arr [ i ], end = " " );
            
    
