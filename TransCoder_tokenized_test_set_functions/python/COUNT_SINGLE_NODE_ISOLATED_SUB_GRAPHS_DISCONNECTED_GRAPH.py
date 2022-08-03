def compute ( graph, N ) :
    count = 0
    for i in range ( 1, N + 1 ) :
        if ( len ( graph [ i ] ) == 0 ) :
            count += 1
    return count
