def countStr ( n, bCount, cCount ) :
    if ( bCount < 0 or cCount < 0 ) :
        return 0
    if ( n == 0 ) :
        return 1
    if ( bCount == 0 and cCount == 0 ) :
        return 1
    res = countStr ( n - 1, bCount, cCount )
    res += countStr ( n - 1, bCount - 1, cCount )
    res += countStr ( n - 1, bCount, cCount - 1 )
    return res
