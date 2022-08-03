def subarrayDivisibleByK ( arr, n, k ) :
    mp = [ 0 ] * 1000
    s = 0;
    e = 0;
    maxs = 0;
    maxe = 0;
    
    mp [ arr [ 0 ] % k ] = mp [ arr [ 0 ] % k ] + 1;
    
    for i in range ( 1, n ) :
        mod = arr [ i ] % k
        while ( mp [ k - mod ] != 0 or ( mod == 0 and mp [ mod ] != 0 ) ) :
            mp [ arr [ s ] % k ] = mp [ arr [ s ] % k ] - 1
            s = s + 1
        mp [ mod ] = mp [ mod ] + 1
        e = e + 1
        if ( ( e - s ) > ( maxe - maxs ) ) :
            maxe = e
            maxs = s
    print ( "The maximum size is {} and the " . format ( ( maxe - maxs + 1 ) ) ) for i in range ( maxs, maxe + 1 ) :
        print ( "{} " . format ( arr [ i ] ), end = "" )
    
