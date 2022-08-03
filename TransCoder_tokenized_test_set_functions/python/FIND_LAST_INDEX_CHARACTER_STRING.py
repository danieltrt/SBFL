def findLastIndex ( str, x ) :
    index = - 1
    for i in range ( 0, len ( str ) ) :
        if str [ i ] == x :
            index = i
    return index
