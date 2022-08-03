def findLastIndex ( str, x ) :
    for i in range ( len ( str ) - 1, - 1, - 1 ) :
        if ( str [ i ] == x ) :
            return i
    return - 1
