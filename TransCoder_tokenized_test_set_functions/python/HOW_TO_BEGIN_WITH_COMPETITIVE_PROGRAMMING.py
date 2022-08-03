def search ( arr, x ) :
    n = len ( arr )
    for j in range ( 0, n ) :
        if ( x == arr [ j ] ) :
            return j
    return - 1
