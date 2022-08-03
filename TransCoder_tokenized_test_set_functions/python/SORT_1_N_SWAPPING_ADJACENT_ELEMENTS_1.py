def sortedAfterSwap ( A, B, n ) :
    for i in range ( 0, n - 1 ) :
        if B [ i ] :
            if A [ i ] != i + 1 :
                A [ i ], A [ i + 1 ] = A [ i + 1 ], A [ i ]
    for i in range ( n ) :
        if A [ i ] != i + 1 :
            return False
    return True
