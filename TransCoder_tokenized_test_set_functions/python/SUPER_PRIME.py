def SieveOfEratosthenes ( n, isPrime ) :
    isPrime [ 0 ] = isPrime [ 1 ] = False
    for i in range ( 2, n + 1 ) :
        isPrime [ i ] = True
    for p in range ( 2, n + 1 ) :
        if ( p * p <= n and isPrime [ p ] == True ) :
            for i in range ( p * 2, n + 1, p ) :
                isPrime [ i ] = False
                p += 1
    
