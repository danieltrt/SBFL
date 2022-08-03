def superSeq ( X, Y, m, n ) :
    dp = [ [ 0 ] * ( n + 2 ) for i in range ( m + 2 ) ]
    for i in range ( m + 1 ) :
        for j in range ( n + 1 ) :
            if ( not i ) : dp [ i ] [ j ] = j
            elif ( not j ) : dp [ i ] [ j ] = i
            elif ( X [ i - 1 ] == Y [ j - 1 ] ) :
                dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ]
            else : dp [ i ] [ j ] = 1 + min ( dp [ i - 1 ] [ j ], dp [ i ] [ j - 1 ] )
    return dp [ m ] [ n ]
