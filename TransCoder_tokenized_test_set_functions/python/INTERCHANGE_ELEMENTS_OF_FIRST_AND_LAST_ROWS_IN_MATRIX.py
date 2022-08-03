def interchangeFirstLast ( mat, n, m ) :
    rows = n
    for i in range ( n ) :
        t = mat [ 0 ] [ i ]
        mat [ 0 ] [ i ] = mat [ rows - 1 ] [ i ]
        mat [ rows - 1 ] [ i ] = t
    
