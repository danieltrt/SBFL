def printMat ( degseq, n ) :
    mat = [ [ 0 ] * n for i in range ( n ) ]
    for i in range ( n ) :
        for j in range ( i + 1, n ) :
            if ( degseq [ i ] > 0 and degseq [ j ] > 0 ) :
                degseq [ i ] -= 1
                degseq [ j ] -= 1
                mat [ i ] [ j ] = 1
                mat [ j ] [ i ] = 1
    print ( "      ", end = " " )
    for i in range ( n ) :
        print ( " ", "(", i, ")", end = "" )
    print ( )
    print ( )
    for i in range ( n ) :
        print ( " ", "(", i, ")", end = "" )
        for j in range ( n ) :
            print ( "     ", mat [ i ] [ j ], end = "" )
        print ( )
    
