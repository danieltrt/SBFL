def countGroups ( position, previous_sum, length, num ) :
    if ( position == length ) :
        return 1
    if ( dp [ position ] [ previous_sum ] != - 1 ) :
        return dp [ position ] [ previous_sum ]
    dp [ position ] [ previous_sum ] = 0
    res = 0
    sum = 0
    for i in range ( position, length ) :
        sum += ( ord ( num [ i ] ) - ord ( '0' ) )
        if ( sum >= previous_sum ) :
            res += countGroups ( i + 1, sum, length, num )
    dp [ position ] [ previous_sum ] = res
    return res
