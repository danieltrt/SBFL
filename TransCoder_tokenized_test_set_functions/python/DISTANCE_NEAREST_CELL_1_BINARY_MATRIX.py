def printDistance ( mat ) :
    global N, M
    ans = [ [ None ] * M for i in range ( N ) ]
    for i in range ( N ) :
        for j in range ( M ) :
            ans [ i ] [ j ] = 999999999999
    for i in range ( N ) :
        for j in range ( M ) :
            for k in range ( N ) :
                for l in range ( M ) :
                    if ( mat [ k ] [ l ] == 1 ) :
                        ans [ i ] [ j ] = min ( ans [ i ] [ j ], abs ( i - k ) + abs ( j - l ) )
    for i in range ( N ) :
        for j in range ( M ) :
            print ( ans [ i ] [ j ], end = " " )
        print ( )
    
