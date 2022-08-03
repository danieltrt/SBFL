def calculateSum ( arr, n ) :
    if ( n == 0 ) :
        return 0
    s = arr [ 0 ]
    value = int ( s )
    sum = value
    for i in range ( 2, n, 2 ) :
        s = arr [ i ]
        value = int ( s )
        operation = arr [ i - 1 ] [ 0 ]
        if ( operation == '+' ) :
            sum += value
        else :
            sum -= value
    return sum
