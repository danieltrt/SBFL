def longestCommonSum ( arr1, arr2, n ) :
    maxLen = 0
    presum1 = presum2 = 0
    diff = {
    }
    
    for i in range ( n ) :
        presum1 += arr1 [ i ]
        presum2 += arr2 [ i ]
        curr_diff = presum1 - presum2
        if curr_diff == 0 :
            maxLen = i + 1
        elif curr_diff not in diff :
            diff [ curr_diff ] = i
        else :
            length = i - diff [ curr_diff ]
            maxLen = max ( maxLen, length )
    return maxLen
