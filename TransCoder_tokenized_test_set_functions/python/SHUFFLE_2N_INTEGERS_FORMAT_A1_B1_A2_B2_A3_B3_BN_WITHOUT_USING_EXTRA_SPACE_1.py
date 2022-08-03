def shufleArray ( a, f, l ) :
    if ( l > f ) :
        return
    if ( l - f == 1 ) :
        return
    mid = int ( ( f + l ) / 2 )
    temp = mid + 1
    mmid = int ( ( f + mid ) / 2 )
    for i in range ( mmid + 1, mid + 1 ) :
        ( a [ i ], a [ temp ] ) = ( a [ temp ], a [ i ] )
        temp += 1
    shufleArray ( a, f, mid )
    shufleArray ( a, mid + 1, l )
