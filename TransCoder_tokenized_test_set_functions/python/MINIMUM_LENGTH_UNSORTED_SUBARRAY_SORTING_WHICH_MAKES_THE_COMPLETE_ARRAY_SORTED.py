def printUnsorted ( arr, n ) :
    e = n - 1
    for s in range ( 0, n - 1 ) :
        if arr [ s ] > arr [ s + 1 ] :
            break
    if s == n - 1 :
        print ( "The complete array is sorted" )
        exit ( )
    e = n - 1
    while e > 0 :
        if arr [ e ] < arr [ e - 1 ] :
            break
        e -= 1
    max = arr [ s ]
    min = arr [ s ]
    for i in range ( s + 1, e + 1 ) :
        if arr [ i ] > max :
            max = arr [ i ]
        if arr [ i ] < min :
            min = arr [ i ]
    for i in range ( s ) :
        if arr [ i ] > min :
            s = i
            break
    i = n - 1
    while i >= e + 1 :
        if arr [ i ] < max :
            e = i
            break
        i -= 1
    print ( "The unsorted subarray which makes the given array" )
    print ( "sorted lies between the indexes %d and %d" % ( s, e ) )
