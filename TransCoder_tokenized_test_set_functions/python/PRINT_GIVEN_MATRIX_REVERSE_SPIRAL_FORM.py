def ReversespiralPrint ( m, n, a ) :
    b = [ 0 for i in range ( 100 ) ]
    i, k, l = 0, 0, 0
    z = 0
    size = m * n
    while ( k < m and l < n ) :
        val = 0
        for i in range ( l, n ) :
            val = a [ k ] [ i ]
            b [ z ] = val
            z += 1
        k += 1
        for i in range ( k, m ) :
            val = a [ i ] [ n - 1 ]
            b [ z ] = val
            z += 1
        n -= 1
        if ( k < m ) :
            for i in range ( n - 1, l - 1, - 1 ) :
                val = a [ m - 1 ] [ i ]
                b [ z ] = val
                z += 1
        m -= 1
        if ( l < n ) :
            for i in range ( m - 1, k - 1, - 1 ) :
                val = a [ i ] [ l ]
                b [ z ] = val
                z += 1
            l += 1
    for i in range ( size - 1, - 1, - 1 ) :
        print ( b [ i ], end = " " )
    
