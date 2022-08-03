def countOfBinaryNumberLessThanN ( N ) :
    q = deque ( )
    q . append ( 1 )
    cnt = 0
    while ( q ) :
        t = q . popleft ( )
        if ( t <= N ) :
            cnt = cnt + 1
            q . append ( t * 10 )
            q . append ( t * 10 + 1 )
    return cnt
