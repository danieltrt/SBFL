def printDivisors ( n ) :
    list = [ ]
    for i in range ( 1, int ( math . sqrt ( n ) + 1 ) ) :
        if ( n % i == 0 ) :
            if ( n / i == i ) :
                print ( i, end = " " )
            else :
                print ( i, end = " " )
                list . append ( int ( n / i ) )
    for i in list [ : : - 1 ] :
        print ( i, end = " " )
    
