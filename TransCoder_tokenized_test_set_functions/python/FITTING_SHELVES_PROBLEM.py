def minSpacePreferLarge ( w, m, n ) :
    num_m = 0
    num_n = 0
    rem = w
    p = 0
    q = 0
    r = 0
    while ( w >= n ) :
        p = w / m
        r = w % m
        if ( r <= rem ) :
            num_m = p
            num_n = q
            rem = r
        q += 1
        w -= n
    print ( str ( int ( num_m ) ) + " " + str ( num_n ) + " " + str ( rem ) )
