def sortedAfterSwap ( A, B, n ) :
    for i in range ( 0, n - 1 ) :
        if ( B [ i ] == 1 ) :
            j = i
            while ( B [ j ] == 1 ) :
                j = j + 1
            A = A [ 0 : i ] + sorted ( A [ i : j + 1 ] ) + A [ j + 1 : ]
            i = j
    for i in range ( 0, n ) :
        if ( A [ i ] != i + 1 ) :
            return False
    return True
