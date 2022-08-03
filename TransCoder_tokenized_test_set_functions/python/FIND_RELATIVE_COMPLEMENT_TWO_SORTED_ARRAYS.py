def relativeComplement ( arr1, arr2, n, m ) :
    i = 0
    j = 0
    while ( i < n and j < m ) :
        if ( arr1 [ i ] < arr2 [ j ] ) :
            print ( arr1 [ i ], " ", end = "" )
            i += 1
        elif ( arr1 [ i ] > arr2 [ j ] ) :
            j += 1
        elif ( arr1 [ i ] == arr2 [ j ] ) :
            i += 1
            j += 1
    while ( i < n ) :
        print ( arr1 [ i ], " ", end = "" )
    
