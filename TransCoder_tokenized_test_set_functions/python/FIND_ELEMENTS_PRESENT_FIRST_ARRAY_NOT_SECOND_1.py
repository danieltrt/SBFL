def findMissing ( a, b, n, m ) :
    s = dict ( )
    for i in range ( m ) :
        s [ b [ i ] ] = 1
    for i in range ( n ) :
        if a [ i ] not in s . keys ( ) :
            print ( a [ i ], end = " " )
    
