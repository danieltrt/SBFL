def countFreq ( a, n ) :
    hm = dict ( )
    for i in range ( n ) :
        hm [ a [ i ] ] = hm . get ( a [ i ], 0 ) + 1
    cumul = 0
    for i in range ( n ) :
        cumul += hm [ a [ i ] ]
        if ( hm [ a [ i ] ] > 0 ) :
            print ( a [ i ], "->", cumul )
        hm [ a [ i ] ] = 0
    
