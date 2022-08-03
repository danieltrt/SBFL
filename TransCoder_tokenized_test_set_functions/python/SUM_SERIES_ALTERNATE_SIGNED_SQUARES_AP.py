def seiresSum ( n, a ) :
    res = 0
    for i in range ( 0, 2 * n ) :
        if ( i % 2 == 0 ) :
            res += a [ i ] * a [ i ]
        else :
            res -= a [ i ] * a [ i ]
    return res
