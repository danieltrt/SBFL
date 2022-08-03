def findMissing ( a, b, n, m ) :
    for i in range ( n ) :
        for j in range ( m ) :
            if ( a [ i ] == b [ j ] ) :
                break
        if ( j == m - 1 ) :
            print ( a [ i ], end = " " )
    
