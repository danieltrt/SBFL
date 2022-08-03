def calc_Expectation ( a, n ) :
    prb = 1 / n
    sum = 0
    for i in range ( 0, n ) :
        sum += ( a [ i ] * prb )
    return float ( sum )
