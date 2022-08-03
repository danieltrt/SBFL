def isDiagonalMatrix ( mat ) :
    for i in range ( 0, N ) :
        for j in range ( 0, N ) :
            if ( ( i != j ) and ( mat [ i ] [ j ] != 0 ) ) :
                return False
    return True
