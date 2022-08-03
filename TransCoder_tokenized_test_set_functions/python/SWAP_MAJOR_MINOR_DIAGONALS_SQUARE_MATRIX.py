def swapDiagonal ( matrix ) :
    for i in range ( N ) :
        matrix [ i ] [ i ], matrix [ i ] [ N - i - 1 ] = \
            matrix [ i ] [ N - i - 1 ], matrix [ i ] [ i ]
    
