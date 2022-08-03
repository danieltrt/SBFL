def groupElements ( arr, n ) :
    visited = [ False ] * n
    for i in range ( 0, n ) :
        visited [ i ] = False
    for i in range ( 0, n ) :
        if ( visited [ i ] == False ) :
            print ( arr [ i ], end = " " )
            for j in range ( i + 1, n ) :
                if ( arr [ i ] == arr [ j ] ) :
                    print ( arr [ i ], end = " " )
                    visited [ j ] = True
    
