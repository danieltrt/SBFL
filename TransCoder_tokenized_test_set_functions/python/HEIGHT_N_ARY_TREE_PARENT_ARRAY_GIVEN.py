def findHeight ( parent, n ) :
    res = 0
    for i in range ( n ) :
        p = i
        current = 1
        while ( parent [ p ] != - 1 ) :
            current += 1
            p = parent [ p ]
        res = max ( res, current )
    return res
