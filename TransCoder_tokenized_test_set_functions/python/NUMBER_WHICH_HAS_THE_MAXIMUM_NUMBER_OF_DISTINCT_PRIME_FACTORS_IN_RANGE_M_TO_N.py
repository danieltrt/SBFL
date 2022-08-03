def maximumNumberDistinctPrimeRange ( m, n ) :
    factorCount = [ 0 ] * ( n + 1 )
    prime = [ False ] * ( n + 1 )
    for i in range ( n + 1 ) :
        factorCount [ i ] = 0
        prime [ i ] = True
    for i in range ( 2, n + 1 ) :
        if ( prime [ i ] == True ) :
            factorCount [ i ] = 1
            for j in range ( i * 2, n + 1, i ) :
                factorCount [ j ] += 1
                prime [ j ] = False
    max = factorCount [ m ]
    num = m
    for i in range ( m, n + 1 ) :
        if ( factorCount [ i ] > max ) :
            max = factorCount [ i ]
            num = i
    return num
