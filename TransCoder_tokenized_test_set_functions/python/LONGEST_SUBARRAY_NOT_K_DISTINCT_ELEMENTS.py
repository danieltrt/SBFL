def longest ( a, n, k ) :
    freq = [ 0 ] * n
    start = 0
    end = 0
    now = 0
    l = 0
    for i in range ( n ) :
        freq [ a [ i ] ] += 1
        if ( freq [ a [ i ] ] == 1 ) :
            now += 1
        while ( now > k ) :
            freq [ a [ l ] ] -= 1
            if ( freq [ a [ l ] ] == 0 ) :
                now -= 1
            l += 1
        if ( i - l + 1 >= end - start + 1 ) :
            end = i
            start = l
    for i in range ( start, end + 1 ) :
        print ( a [ i ], end = " " )
    
