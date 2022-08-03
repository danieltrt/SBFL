def findPairs ( arr1, arr2, n, m, x ) :
    s = set ( )
    for i in range ( 0, n ) :
        s . add ( arr1 [ i ] )
    for j in range ( 0, m ) :
        if ( ( x - arr2 [ j ] ) in s ) :
            print ( ( x - arr2 [ j ] ), '', arr2 [ j ] )
    
