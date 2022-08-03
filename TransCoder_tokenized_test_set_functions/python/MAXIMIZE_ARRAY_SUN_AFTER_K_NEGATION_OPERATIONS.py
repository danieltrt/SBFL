def maximumSum ( arr, n, k ) :
    for i in range ( 1, k + 1 ) :
        min = + 2147483647
        index = - 1
        for j in range ( n ) :
            if ( arr [ j ] < min ) :
                min = arr [ j ]
                index = j
        if ( min == 0 ) :
            break
        arr [ index ] = - arr [ index ]
    sum = 0
    for i in range ( n ) :
        sum += arr [ i ]
    return sum
