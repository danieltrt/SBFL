def minRadius ( k, x, y, n ) :
    dis = [ 0 ] * n
    for i in range ( 0, n ) :
        dis [ i ] = x [ i ] * x [ i ] + y [ i ] * y [ i ]
    dis . sort ( )
    return dis [ k - 1 ]
