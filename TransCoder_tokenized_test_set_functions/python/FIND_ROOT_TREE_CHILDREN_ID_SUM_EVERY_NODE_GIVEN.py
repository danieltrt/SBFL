def findRoot ( arr, n ) :
    root = 0
    for i in range ( n ) :
        root += ( arr [ i ] [ 0 ] - arr [ i ] [ 1 ] )
    return root
