def findCommon ( mat ) :
    global M
    global N
    cnt = dict ( )
    cnt = defaultdict ( lambda : 0, cnt )
    i = 0
    j = 0
    while ( i < M ) :
        cnt [ mat [ i ] [ 0 ] ] = cnt [ mat [ i ] [ 0 ] ] + 1
        j = 1
        while ( j < N ) :
            if ( mat [ i ] [ j ] != mat [ i ] [ j - 1 ] ) :
                cnt [ mat [ i ] [ j ] ] = cnt [ mat [ i ] [ j ] ] + 1
            j = j + 1
        i = i + 1
    for ele in cnt :
        if ( cnt [ ele ] == M ) :
            return ele
    return - 1
