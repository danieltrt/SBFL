def transpose ( A ) :
    for i in range ( N ) :
        for j in range ( i + 1, N ) :
            A [ i ] [ j ], A [ j ] [ i ] = A [ j ] [ i ], A [ i ] [ j ]
    
