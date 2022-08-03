def printClosest ( ar1, ar2, m, n, x ) :
    diff = sys . maxsize
    l = 0
    r = n - 1
    while ( l < m and r >= 0 ) :
        if abs ( ar1 [ l ] + ar2 [ r ] - x ) < diff :
            res_l = l
            res_r = r
            diff = abs ( ar1 [ l ] + ar2 [ r ] - x )
        if ar1 [ l ] + ar2 [ r ] > x :
            r = r - 1
        else :
            l = l + 1
    print ( "The closest pair is [", ar1 [ res_l ], ",", ar2 [ res_r ], "]" )
