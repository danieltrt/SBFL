def countFreq ( a, n ) :
    hm = {
    }
    
    for i in range ( 0, n ) :
        hm [ a [ i ] ] = hm . get ( a [ i ], 0 ) + 1
    st = set ( )
    for x in hm :
        st . add ( ( x, hm [ x ] ) )
    cumul = 0
    for x in sorted ( st ) :
        cumul += x [ 1 ]
        print ( x [ 0 ], cumul )
    
