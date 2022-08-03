def kSmallestPair ( arr1, n1, arr2, n2, k ) :
    if ( k > n1 * n2 ) :
        print ( "k pairs don't exist" )
        return
    index2 = [ 0 for i in range ( n1 ) ]
    while ( k > 0 ) :
        min_sum = sys . maxsize
        min_index = 0
        for i1 in range ( 0, n1, 1 ) :
            if ( index2 [ i1 ] < n2 and arr1 [ i1 ] + arr2 [ index2 [ i1 ] ] < min_sum ) :
                min_index = i1
                min_sum = arr1 [ i1 ] + arr2 [ index2 [ i1 ] ]
        print ( "(", arr1 [ min_index ], ",", arr2 [ index2 [ min_index ] ], ")", end = " " )
        index2 [ min_index ] += 1
        k -= 1
    
