def countkDist ( str1, k ) :
    n = len ( str1 )
    res = 0
    cnt = [ 0 ] * 27
    for i in range ( 0, n ) :
        dist_count = 0
        cnt = [ 0 ] * 27
        for j in range ( i, n ) :
            if ( cnt [ ord ( str1 [ j ] ) - 97 ] == 0 ) :
                dist_count += 1
            cnt [ ord ( str1 [ j ] ) - 97 ] += 1
            if ( dist_count == k ) :
                res += 1
            if ( dist_count > k ) :
                break
    return res
