def digitsNum ( N ) :
    if ( N == 0 ) :
        print ( "0", end = "" )
    if ( N % 9 != 0 ) :
        print ( N % 9, end = "" )
    for i in range ( 1, int ( N / 9 ) + 1 ) :
        print ( "9", end = "" )
    for i in range ( 1, N + 1 ) :
        print ( "0", end = "" )
    print ( )
