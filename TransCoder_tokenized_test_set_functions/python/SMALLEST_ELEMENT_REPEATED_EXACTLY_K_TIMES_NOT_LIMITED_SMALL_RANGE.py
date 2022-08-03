def smallestKFreq ( arr, n, k ) :
    mp = defaultdict ( lambda : 0 )
    for i in range ( n ) :
        mp [ arr [ i ] ] += 1
    res = sys . maxsize
    res1 = sys . maxsize
    for key, values in mp . items ( ) :
        if values == k :
            res = min ( res, key )
    return res if res != res1 else - 1
