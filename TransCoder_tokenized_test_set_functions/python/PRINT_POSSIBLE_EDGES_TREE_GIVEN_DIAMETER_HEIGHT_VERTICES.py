def constructTree ( n, d, h ) :
    if d == 1 :
        if n == 2 and h == 1 :
            print ( "1 2" )
            return 0
        print ( "-1" )
        return 0
    if d > 2 * h :
        print ( "-1" )
        return 0
    for i in range ( 1, h + 1 ) :
        print ( i, " ", i + 1 )
    if d > h :
        print ( 1, "  ", h + 2 )
        for i in range ( h + 2, d + 1 ) :
            print ( i, " ", i + 1 )
    for i in range ( d + 1, n ) :
        k = 1
        if d == h :
            k = 2
        print ( k, " ", i + 1 )
    
