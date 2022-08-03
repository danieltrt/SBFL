def minMaxValues ( arr, n, m ) :
    sum = 0
    INF = 1000000000
    MAX = 50
    for i in range ( 0, ( n + m ) ) :
        sum += arr [ i ]
        arr [ i ] += 50
    dp = [ [ 0 for x in range ( MAX * MAX + 1 ) ] for y in range ( MAX + 1 ) ]
    dp [ 0 ] [ 0 ] = 1
    for i in range ( 0, ( n + m ) ) :
        for k in range ( min ( n, i + 1 ), 0, - 1 ) :
            for j in range ( 0, MAX * MAX + 1 ) :
                if ( dp [ k - 1 ] [ j ] ) :
                    dp [ k ] [ j + arr [ i ] ] = 1
    max_value = - 1 * INF
    min_value = INF
    for i in range ( 0, MAX * MAX + 1 ) :
        if ( dp [ n ] [ i ] ) :
            temp = i - 50 * n
            max_value = max ( max_value, temp * ( sum - temp ) )
            min_value = min ( min_value, temp * ( sum - temp ) )
    print ( "Maximum Value: {}\nMinimum Value: {}" . format ( max_value, min_value ) )
