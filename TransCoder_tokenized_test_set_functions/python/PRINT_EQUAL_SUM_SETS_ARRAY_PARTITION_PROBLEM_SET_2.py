def printEqualSumSets ( arr, n ) :
    sum_array = sum ( arr )
    if ( sum_array & 1 ) :
        print ( "-1" )
        return
    k = sum_array >> 1
    dp = np . zeros ( ( n + 1, k + 1 ) )
    for i in range ( 1, k + 1 ) :
        dp [ 0 ] [ i ] = False
    for i in range ( n + 1 ) :
        dp [ i ] [ 0 ] = True
    for i in range ( 1, n + 1 ) :
        for currSum in range ( 1, k + 1 ) :
            dp [ i ] [ currSum ] = dp [ i - 1 ] [ currSum ]
            if ( arr [ i - 1 ] <= currSum ) :
                dp [ i ] [ currSum ] = ( dp [ i ] [ currSum ] or dp [ i - 1 ] [ currSum - arr [ i - 1 ] ] )
    set1, set2 = [ ], [ ]
    if ( not dp [ n ] [ k ] ) :
        print ( "-1" )
        return
    i = n
    currSum = k
    while ( i > 0 and currSum >= 0 ) :
        if ( dp [ i - 1 ] [ currSum ] ) :
            i -= 1
            set2 . append ( arr [ i ] )
        elif ( dp [ i - 1 ] [ currSum - arr [ i - 1 ] ] ) :
            i -= 1
            currSum -= arr [ i ]
            set1 . append ( arr [ i ] )
    print ( "Set 1 elements:", end = " " )
    for i in range ( len ( set1 ) ) :
        print ( set1 [ i ], end = " " )
    print ( "\nSet 2 elements:", end = " " )
    for i in range ( len ( set2 ) ) :
        print ( set2 [ i ], end = " " )
    
