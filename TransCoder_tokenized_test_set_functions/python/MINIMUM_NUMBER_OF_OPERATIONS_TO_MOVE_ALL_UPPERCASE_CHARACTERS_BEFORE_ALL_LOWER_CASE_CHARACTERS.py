def minOperations ( str, n ) :
    lastUpper = - 1
    firstLower = - 1
    for i in range ( n - 1, - 1, - 1 ) :
        if ( str [ i ] . isupper ( ) ) :
            lastUpper = i
            break
    for i in range ( n ) :
        if ( str [ i ] . islower ( ) ) :
            firstLower = i
            break
    if ( lastUpper == - 1 or firstLower == - 1 ) :
        return 0
    countUpper = 0
    for i in range ( firstLower, n ) :
        if ( str [ i ] . isupper ( ) ) :
            countUpper += 1
    countLower = 0
    for i in range ( lastUpper ) :
        if ( str [ i ] . islower ( ) ) :
            countLower += 1
    return min ( countLower, countUpper )
