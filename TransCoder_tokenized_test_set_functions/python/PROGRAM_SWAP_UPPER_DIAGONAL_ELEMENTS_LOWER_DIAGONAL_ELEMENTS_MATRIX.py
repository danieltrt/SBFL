def swapUpperToLower ( arr ) :
    n = 4;
    
    for i in range ( 0, n ) :
        for j in range ( i + 1, n ) :
            temp = arr [ i ] [ j ];
            
            arr [ i ] [ j ] = arr [ j ] [ i ];
            
            arr [ j ] [ i ] = temp;
            
    for i in range ( 0, n ) :
        for j in range ( 0, n ) :
            print ( arr [ i ] [ j ], end = " " );
            
        print ( " " );
        
    
