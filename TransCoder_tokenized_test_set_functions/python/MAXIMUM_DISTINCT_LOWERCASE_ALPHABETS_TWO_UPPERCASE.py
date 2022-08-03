def maxLower ( str ) :
    n = len ( str )
    i = 0
    for i in range ( n ) :
        if str [ i ] >= 'A' and str [ i ] <= 'Z' :
            i += 1
            break
    maxCount = 0
    count = [ ]
    for j in range ( MAX_CHAR ) :
        count . append ( 0 )
    for j in range ( i, n ) :
        if str [ j ] >= 'A' and str [ j ] <= 'Z' :
            currCount = 0
            for k in range ( MAX_CHAR ) :
                if count [ k ] > 0 :
                    currCount += 1
            maxCount = max ( maxCount, currCount )
            for y in count :
                y = 0
        if str [ j ] >= 'a' and str [ j ] <= 'z' :
            count [ ord ( str [ j ] ) - ord ( 'a' ) ] += 1
    return maxCount
