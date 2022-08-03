def findMaxPoints ( A ) :
    P1S = [ [ 0 for i in range ( N + 2 ) ] for j in range ( M + 2 ) ]
    P1E = [ [ 0 for i in range ( N + 2 ) ] for j in range ( M + 2 ) ]
    P2S = [ [ 0 for i in range ( N + 2 ) ] for j in range ( M + 2 ) ]
    P2E = [ [ 0 for i in range ( N + 2 ) ] for j in range ( M + 2 ) ]
    for i in range ( 1, N + 1 ) :
        for j in range ( 1, M + 1 ) :
            P1S [ i ] [ j ] = max ( P1S [ i - 1 ] [ j ], P1S [ i ] [ j - 1 ] ) + A [ i - 1 ] [ j - 1 ]
    for i in range ( N, 0, - 1 ) :
        for j in range ( M, 0, - 1 ) :
            P1E [ i ] [ j ] = max ( P1E [ i + 1 ] [ j ], P1E [ i ] [ j + 1 ] ) + A [ i - 1 ] [ j - 1 ]
    for i in range ( N, 0, - 1 ) :
        for j in range ( 1, M + 1 ) :
            P2S [ i ] [ j ] = max ( P2S [ i + 1 ] [ j ], P2S [ i ] [ j - 1 ] ) + A [ i - 1 ] [ j - 1 ]
    for i in range ( 1, N + 1 ) :
        for j in range ( M, 0, - 1 ) :
            P2E [ i ] [ j ] = max ( P2E [ i - 1 ] [ j ], P2E [ i ] [ j + 1 ] ) + A [ i - 1 ] [ j - 1 ]
    ans = 0
    for i in range ( 2, N ) :
        for j in range ( 2, M ) :
            op1 = P1S [ i ] [ j - 1 ] + P1E [ i ] [ j + 1 ] + \
                P2S [ i + 1 ] [ j ] + P2E [ i - 1 ] [ j ]
            op2 = P1S [ i - 1 ] [ j ] + P1E [ i + 1 ] [ j ] + \
                P2S [ i ] [ j - 1 ] + P2E [ i ] [ j + 1 ]
            ans = max ( ans, max ( op1, op2 ) )
    return ans
