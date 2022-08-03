def sortUsingHash ( a, n ) :
    Max = max ( a )
    Min = abs ( min ( a ) )
    hashpos = [ 0 ] * ( Max + 1 )
    hashneg = [ 0 ] * ( Min + 1 )
    for i in range ( 0, n ) :
        if a [ i ] >= 0 :
            hashpos [ a [ i ] ] += 1
        else :
            hashneg [ abs ( a [ i ] ) ] += 1
    for i in range ( Min, 0, - 1 ) :
        if hashneg [ i ] != 0 :
            for j in range ( 0, hashneg [ i ] ) :
                print ( ( - 1 ) * i, end = " " )
    for i in range ( 0, Max + 1 ) :
        if hashpos [ i ] != 0 :
            for j in range ( 0, hashpos [ i ] ) :
                print ( i, end = " " )
    
