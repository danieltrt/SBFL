def getMinStepToReachEnd ( arr, N ) :
    visit = [ False for i in range ( N ) ]
    distance = [ 0 for i in range ( N ) ]
    digit = [ [ 0 for i in range ( N ) ] for j in range ( 10 ) ]
    for i in range ( 1, N ) :
        digit [ arr [ i ] ] . append ( i )
    distance [ 0 ] = 0
    visit [ 0 ] = True
    q = [ ]
    q . append ( 0 )
    while ( len ( q ) > 0 ) :
        idx = q [ 0 ]
        q . remove ( q [ 0 ] )
        if ( idx == N - 1 ) :
            break
        d = arr [ idx ]
        for i in range ( len ( digit [ d ] ) ) :
            nextidx = digit [ d ] [ i ]
            if ( visit [ nextidx ] == False ) :
                visit [ nextidx ] = True
                q . append ( nextidx )
                distance [ nextidx ] = distance [ idx ] + 1
        if ( idx - 1 >= 0 and visit [ idx - 1 ] == False ) :
            visit [ idx - 1 ] = True
            q . append ( idx - 1 )
            distance [ idx - 1 ] = distance [ idx ] + 1
        if ( idx + 1 < N and visit [ idx + 1 ] == False ) :
            visit [ idx + 1 ] = True
            q . append ( idx + 1 )
            distance [ idx + 1 ] = distance [ idx ] + 1
    return distance [ N - 1 ]
