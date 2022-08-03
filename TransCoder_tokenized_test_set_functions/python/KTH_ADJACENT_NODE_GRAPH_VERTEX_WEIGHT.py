def printkthnode ( adj, wt, n, k ) :
    for i in range ( n ) :
        adj [ i ] . sort ( )
    for i in range ( n ) :
        if ( len ( adj [ i ] ) >= k ) :
            print ( adj [ i ] [ len ( adj [ i ] ) - k ] [ 1 ], end = " " )
        else :
            print ( "-1", end = " " )
    
