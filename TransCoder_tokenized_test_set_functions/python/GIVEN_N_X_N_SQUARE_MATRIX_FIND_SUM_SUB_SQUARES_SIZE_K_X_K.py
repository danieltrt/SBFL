def printSumSimple ( mat, k ) :
    if ( k > n ) :
        return
    for i in range ( n - k + 1 ) :
        for j in range ( n - k + 1 ) :
            sum = 0
            for p in range ( i, k + i ) :
                for q in range ( j, k + j ) :
                    sum += mat [ p ] [ q ]
            print ( sum, end = " " )
        print ( )
    
