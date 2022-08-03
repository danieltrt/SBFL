def longestCommonSum ( arr1, arr2, n ) :
    maxLen = 0
    for i in range ( 0, n ) :
        sum1 = 0
        sum2 = 0
        for j in range ( i, n ) :
            sum1 += arr1 [ j ]
            sum2 += arr2 [ j ]
            if ( sum1 == sum2 ) :
                len = j - i + 1
                if ( len > maxLen ) :
                    maxLen = len
    return maxLen
