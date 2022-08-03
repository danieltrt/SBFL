def countSeq ( n, diff ) :
    if ( abs ( diff ) > n ) :
        return 0
    if ( n == 1 and diff == 0 ) :
        return 2
    if ( n == 1 and abs ( diff ) == 1 ) :
        return 1
    res = ( countSeq ( n - 1, diff + 1 ) + 2 * countSeq ( n - 1, diff ) + countSeq ( n - 1, diff - 1 ) )
    return res
