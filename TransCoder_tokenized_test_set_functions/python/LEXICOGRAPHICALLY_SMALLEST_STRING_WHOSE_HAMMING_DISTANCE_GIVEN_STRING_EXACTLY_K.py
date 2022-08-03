def findString ( str, n, k ) :
    if ( k == 0 ) :
        print ( str )
        return
    str2 = str
    p = 0
    for i in range ( 0, n, 1 ) :
        if ( str2 [ i ] != 'a' ) :
            str2 = str2 . replace ( str2 [ i ], 'a' )
            p += 1
            if ( p == k ) :
                break
    if ( p < k ) :
        i = n - 1
        while ( i >= 0 ) :
            if ( str [ i ] == 'a' ) :
                str2 = str2 . replace ( str2 [ i ], 'b' )
                p += 1
            if ( p == k ) :
                break
            i -= 1
    print ( str2 )
