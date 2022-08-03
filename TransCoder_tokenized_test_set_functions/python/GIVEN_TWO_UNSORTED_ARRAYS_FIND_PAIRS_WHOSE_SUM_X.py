def findPairs ( arr1, arr2, n, m, x ) :
    for i in range ( 0, n ) :
        for j in range ( 0, m ) :
            if ( arr1 [ i ] + arr2 [ j ] == x ) :
                print ( arr1 [ i ], arr2 [ j ] )
    
