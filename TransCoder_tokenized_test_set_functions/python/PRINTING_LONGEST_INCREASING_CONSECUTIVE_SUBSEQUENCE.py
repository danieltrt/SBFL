def longestSubsequence ( a, n ) :
    mp = {
    i : 0 for i in range ( 13 ) }
    
    dp = [ 0 for i in range ( n ) ]
    maximum = - sys . maxsize - 1
    index = - 1
    for i in range ( n ) :
        if ( ( a [ i ] - 1 ) in mp ) :
            lastIndex = mp [ a [ i ] - 1 ] - 1
            dp [ i ] = 1 + dp [ lastIndex ]
        else :
            dp [ i ] = 1
        mp [ a [ i ] ] = i + 1
        if ( maximum < dp [ i ] ) :
            maximum = dp [ i ]
            index = i
    for curr in range ( a [ index ] - maximum + 1, a [ index ] + 1, 1 ) :
        print ( curr, end = " " )
    
