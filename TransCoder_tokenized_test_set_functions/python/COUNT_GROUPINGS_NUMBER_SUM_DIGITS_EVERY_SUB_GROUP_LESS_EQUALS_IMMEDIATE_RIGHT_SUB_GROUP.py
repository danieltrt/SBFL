def countGroups ( position, previous_sum, length, num ) :
    if ( position == length ) :
        return 1
    res = 0
    sum = 0
    for i in range ( position, length ) :
        sum = sum + int ( num [ i ] )
        if ( sum >= previous_sum ) :
            res = res + countGroups ( i + 1, sum, length, num )
    return res
