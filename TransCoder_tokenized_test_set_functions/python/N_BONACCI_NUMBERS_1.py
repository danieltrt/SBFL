def bonacciseries ( n, m ) :
    a = [ 0 for i in range ( m ) ]
    a [ n - 1 ] = 1
    a [ n ] = 1
    for i in range ( n + 1, m ) :
        a [ i ] = 2 * a [ i - 1 ] - a [ i - n - 1 ]
    for i in range ( 0, m ) :
        print ( a [ i ], end = " " )
    
