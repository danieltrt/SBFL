def divisibilityCheck ( arr, n ) :
    s = dict ( )
    max_ele = - 10 * * 9
    for i in range ( n ) :
        s [ arr [ i ] ] = 1
        max_ele = max ( max_ele, arr [ i ] )
    res = dict ( )
    for i in range ( n ) :
        if ( arr [ i ] != 0 ) :
            for j in range ( arr [ i ] * 2, max_ele + 1, arr [ i ] ) :
                if ( j in s . keys ( ) ) :
                    res [ j ] = 1
    for x in res :
        print ( x, end = " " )
    
