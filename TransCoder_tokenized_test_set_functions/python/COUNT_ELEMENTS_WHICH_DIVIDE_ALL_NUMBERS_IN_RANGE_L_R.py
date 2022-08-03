def answerQuery ( a, n, l, r ) :
    count = 0
    l = l - 1
    for i in range ( l, r, 1 ) :
        element = a [ i ]
        divisors = 0
        for j in range ( l, r, 1 ) :
            if ( a [ j ] % a [ i ] == 0 ) :
                divisors += 1
            else :
                break
        if ( divisors == ( r - l ) ) :
            count += 1
    return count
