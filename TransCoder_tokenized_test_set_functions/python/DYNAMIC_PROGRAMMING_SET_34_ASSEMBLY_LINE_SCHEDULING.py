def carAssembly ( a, t, e, x ) :
    NUM_STATION = len ( a [ 0 ] )
    T1 = [ 0 for i in range ( NUM_STATION ) ]
    T2 = [ 0 for i in range ( NUM_STATION ) ]
    T1 [ 0 ] = e [ 0 ] + a [ 0 ] [ 0 ]
    T2 [ 0 ] = e [ 1 ] + a [ 1 ] [ 0 ]
    for i in range ( 1, NUM_STATION ) :
        T1 [ i ] = min ( T1 [ i - 1 ] + a [ 0 ] [ i ], T2 [ i - 1 ] + t [ 1 ] [ i ] + a [ 0 ] [ i ] )
        T2 [ i ] = min ( T2 [ i - 1 ] + a [ 1 ] [ i ], T1 [ i - 1 ] + t [ 0 ] [ i ] + a [ 1 ] [ i ] )
    return min ( T1 [ NUM_STATION - 1 ] + x [ 0 ], T2 [ NUM_STATION - 1 ] + x [ 1 ] )
