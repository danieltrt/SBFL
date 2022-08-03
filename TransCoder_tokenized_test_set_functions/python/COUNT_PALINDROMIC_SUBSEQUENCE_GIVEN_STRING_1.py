def countPS ( i, j ) :
    if ( i >= n or j < 0 ) :
        return 0
    if ( dp [ i ] [ j ] != - 1 ) :
        return dp [ i ] [ j ]
    if ( abs ( i - j ) == 1 ) :
        if ( str [ i ] == str [ j ] ) :
            dp [ i ] [ j ] = 3
            return dp [ i ] [ j ]
        else :
            dp [ i ] [ j ] = 2
            return dp [ i ] [ j ]
    if ( i == j ) :
        dp [ 1 ] [ j ] = 1
        return dp [ 1 ] [ j ]
    elif ( str [ i ] == str [ j ] ) :
        dp [ i ] [ j ] = ( countPS ( i + 1, j ) + countPS ( i, j - 1 ) + 1 )
        return dp [ i ] [ j ]
    else :
        dp [ i ] [ j ] = ( countPS ( i + 1, j ) + countPS ( i, j - 1 ) - countPS ( i + 1, j - 1 ) )
        return dp [ i ] [ j ]
    
