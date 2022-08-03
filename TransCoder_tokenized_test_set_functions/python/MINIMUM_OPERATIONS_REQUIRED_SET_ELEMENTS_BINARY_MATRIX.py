def minOperation ( arr ) :
    ans = 0
    for i in range ( N - 1, - 1, - 1 ) :
        for j in range ( M - 1, - 1, - 1 ) :
            if ( arr [ i ] [ j ] == 0 ) :
                ans += 1
                for k in range ( i + 1 ) :
                    for h in range ( j + 1 ) :
                        if ( arr [ k ] [ h ] == 1 ) :
                            arr [ k ] [ h ] = 0
                        else :
                            arr [ k ] [ h ] = 1
    return ans
