def bitonicGenerator ( arr, n ) :
    i = 1
    j = n - 1
    if ( j % 2 != 0 ) :
        j = j - 1
    while ( i < j ) :
        arr [ j ], arr [ i ] = arr [ i ], arr [ j ]
        i = i + 2
        j = j - 2
    arr_f = [ ]
    arr_s = [ ]
    for i in range ( int ( ( n + 1 ) / 2 ) ) :
        arr_f . append ( arr [ i ] )
    i = int ( ( n + 1 ) / 2 )
    while ( i < n ) :
        arr_s . append ( arr [ i ] )
        i = i + 1
    arr_f . sort ( )
    arr_s . sort ( reverse = True )
    for i in arr_s :
        arr_f . append ( i )
    return arr_f
