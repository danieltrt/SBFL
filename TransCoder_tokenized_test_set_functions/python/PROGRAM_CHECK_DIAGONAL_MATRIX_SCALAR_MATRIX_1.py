def isScalarMatrix ( mat ) :
    for i in range ( 0, N ) :
        for j in range ( 0, N ) :
            if ( ( i != j ) and ( mat [ i ] [ j ] != 0 ) ) :
                return False
    for i in range ( 0, N - 1 ) :
        if ( mat [ i ] [ i ] != mat [ i + 1 ] [ i + 1 ] ) :
            return False
    return True
