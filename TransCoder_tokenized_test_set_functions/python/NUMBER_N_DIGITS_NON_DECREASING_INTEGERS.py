def nonDecNums ( n ) :
    a = np . zeros ( ( n + 1, 10 ) )
    for i in range ( 10 ) :
        a [ 0 ] [ i ] = 1
    for i in range ( 1, n + 1 ) :
        a [ i ] [ 9 ] = 1
    for i in range ( 1, n + 1 ) :
        for j in range ( 8, - 1, - 1 ) :
            a [ i ] [ j ] = a [ i - 1 ] [ j ] + a [ i ] [ j + 1 ]
    return int ( a [ n ] [ 0 ] )
