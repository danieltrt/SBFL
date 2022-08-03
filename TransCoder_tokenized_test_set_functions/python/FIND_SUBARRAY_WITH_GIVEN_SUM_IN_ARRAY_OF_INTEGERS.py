def subArraySum ( arr, n, Sum ) :
    Map = {
    }
    
    curr_sum = 0
    for i in range ( 0, n ) :
        curr_sum = curr_sum + arr [ i ]
        if curr_sum == Sum :
            print ( "Sum found between indexes 0 to", i )
            return
        if ( curr_sum - Sum ) in Map :
            print ( "Sum found between indexes", \ Map [ curr_sum - Sum ] + 1, "to", i )
            return
        Map [ curr_sum ] = i
    print ( "No subarray with given sum exists" )
