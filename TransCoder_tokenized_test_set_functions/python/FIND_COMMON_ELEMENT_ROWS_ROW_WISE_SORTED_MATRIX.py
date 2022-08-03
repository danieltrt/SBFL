def findCommon ( mat ) :
    column = [ N - 1 ] * M
    min_row = 0
    while ( column [ min_row ] >= 0 ) :
        for i in range ( M ) :
            if ( mat [ i ] [ column [ i ] ] < mat [ min_row ] [ column [ min_row ] ] ) :
                min_row = i
        eq_count = 0
        for i in range ( M ) :
            if ( mat [ i ] [ column [ i ] ] > mat [ min_row ] [ column [ min_row ] ] ) :
                if ( column [ i ] == 0 ) :
                    return - 1
                column [ i ] -= 1
            else :
                eq_count += 1
        if ( eq_count == M ) :
            return mat [ min_row ] [ column [ min_row ] ]
    return - 1
