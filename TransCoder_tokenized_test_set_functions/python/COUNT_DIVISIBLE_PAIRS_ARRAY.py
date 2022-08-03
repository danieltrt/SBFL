def countDivisibles ( arr, n ) :
    res = 0
    for i in range ( 0, n ) :
        for j in range ( i + 1, n ) :
            if ( arr [ i ] % arr [ j ] == 0 or arr [ j ] % arr [ i ] == 0 ) :
                res += 1
    return res
