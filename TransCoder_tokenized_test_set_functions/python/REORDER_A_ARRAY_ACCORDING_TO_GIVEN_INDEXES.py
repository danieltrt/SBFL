def reorder ( arr, index, n ) :
    temp = [ 0 ] * n;
    
    for i in range ( 0, n ) :
        temp [ index [ i ] ] = arr [ i ]
    for i in range ( 0, n ) :
        arr [ i ] = temp [ i ]
        index [ i ] = i
    
