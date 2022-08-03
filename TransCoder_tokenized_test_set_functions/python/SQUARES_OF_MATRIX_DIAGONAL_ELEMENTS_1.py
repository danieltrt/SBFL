def diagonalsquare ( mat, row, column ) :
    print ( "Diagonal one : ", end = "" )
    for i in range ( 0, row ) :
        print ( mat [ i ] [ i ] * mat [ i ] [ i ], end = " " )
    print ( "\n\nDiagonal two : ", end = "" )
    for i in range ( 0, row ) :
        print ( mat [ i ] [ row - i - 1 ] * mat [ i ] [ row - i - 1 ], end = " " )
    
