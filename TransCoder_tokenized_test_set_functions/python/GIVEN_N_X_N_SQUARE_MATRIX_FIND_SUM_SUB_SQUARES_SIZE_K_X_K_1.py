def printSumTricky ( mat, k ) :
    global n
    if k > n :
        return
    stripSum = [ [ None ] * n for i in range ( n ) ]
    for j in range ( n ) :
        Sum = 0
        for i in range ( k ) :
            Sum += mat [ i ] [ j ]
        stripSum [ 0 ] [ j ] = Sum
        for i in range ( 1, n - k + 1 ) :
            Sum += ( mat [ i + k - 1 ] [ j ] - mat [ i - 1 ] [ j ] )
            stripSum [ i ] [ j ] = Sum
    for i in range ( n - k + 1 ) :
        Sum = 0
        for j in range ( k ) :
            Sum += stripSum [ i ] [ j ]
        print ( Sum, end = " " )
        for j in range ( 1, n - k + 1 ) :
            Sum += ( stripSum [ i ] [ j + k - 1 ] - stripSum [ i ] [ j - 1 ] )
            print ( Sum, end = " " )
        print ( )
    
