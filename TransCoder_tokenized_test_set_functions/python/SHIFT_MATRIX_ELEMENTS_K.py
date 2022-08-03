def shiftMatrixByK ( mat, k ) :
    if ( k > N ) :
        print ( "shifting is" " not possible" )
        return
    j = 0
    while ( j < N ) :
        for i in range ( k, N ) :
            print ( "{} " . format ( mat [ j ] [ i ] ), end = "" )
        for i in range ( 0, k ) :
            print ( "{} " . format ( mat [ j ] [ i ] ), end = "" )
        print ( "" )
        j = j + 1
    
