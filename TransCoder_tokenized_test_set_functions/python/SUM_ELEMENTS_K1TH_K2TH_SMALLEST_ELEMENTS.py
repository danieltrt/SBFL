def sumBetweenTwoKth ( arr, n, k1, k2 ) :
    arr . sort ( )
    result = 0
    for i in range ( k1, k2 - 1 ) :
        result += arr [ i ]
    return result
