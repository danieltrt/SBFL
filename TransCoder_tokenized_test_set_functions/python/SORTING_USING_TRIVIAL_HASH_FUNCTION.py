def sortUsingHash ( a, n ) :
    Max = max ( a )
    Hash = [ 0 ] * ( Max + 1 )
    for i in range ( 0, n ) :
        Hash [ a [ i ] ] += 1
    for i in range ( 0, Max + 1 ) :
        if Hash [ i ] != 0 :
            for j in range ( 0, Hash [ i ] ) :
                print ( i, end = " " )
    
