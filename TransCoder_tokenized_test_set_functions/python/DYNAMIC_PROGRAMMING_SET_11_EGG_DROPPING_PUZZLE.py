def eggDrop ( n, k ) :
    if ( k == 1 or k == 0 ) :
        return k
    if ( n == 1 ) :
        return k
    min = sys . maxsize
    for x in range ( 1, k + 1 ) :
        res = max ( eggDrop ( n - 1, x - 1 ), eggDrop ( n, k - x ) )
        if ( res < min ) :
            min = res
    return min + 1
