def countIslands ( mat ) :
    count = 0;
    
    for i in range ( 0, M ) :
        for j in range ( 0, N ) :
            if ( mat [ i ] [ j ] == 'X' ) :
                if ( ( i == 0 or mat [ i - 1 ] [ j ] == 'O' ) and ( j == 0 or mat [ i ] [ j - 1 ] == 'O' ) ) :
                    count = count + 1
    return count
