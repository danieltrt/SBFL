def sortSquares ( arr, n ) :
    K = 0
    for K in range ( n ) :
        if ( arr [ K ] >= 0 ) :
            break
    i = K - 1
    j = K
    ind = 0
    temp = [ 0 ] * n
    while ( i >= 0 and j < n ) :
        if ( arr [ i ] * arr [ i ] < arr [ j ] * arr [ j ] ) :
            temp [ ind ] = arr [ i ] * arr [ i ]
            i -= 1
        else :
            temp [ ind ] = arr [ j ] * arr [ j ]
            j += 1
        ind += 1
    while ( i >= 0 ) :
        temp [ ind ] = arr [ i ] * arr [ i ]
        i -= 1
        ind += 1
    while ( j < n ) :
        temp [ ind ] = arr [ j ] * arr [ j ]
        j += 1
        ind += 1
    for i in range ( n ) :
        arr [ i ] = temp [ i ]
    
