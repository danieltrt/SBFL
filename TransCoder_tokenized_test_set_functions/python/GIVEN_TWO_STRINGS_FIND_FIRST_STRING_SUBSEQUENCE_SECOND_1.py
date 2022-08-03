def isSubSequence ( str1, str2, m, n ) :
    j = 0
    i = 0
    while j < m and i < n :
        if str1 [ j ] == str2 [ i ] :
            j = j + 1
        i = i + 1
    return j == m
