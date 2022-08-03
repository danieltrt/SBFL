def countSink ( n, m, edgeFrom, edgeTo ) :
    mark = [ 0 ] * ( n + 1 )
    for i in range ( m ) :
        mark [ edgeFrom [ i ] ] = 1
    count = 0
    for i in range ( 1, n + 1 ) :
        if ( not mark [ i ] ) :
            count += 1
    return count
