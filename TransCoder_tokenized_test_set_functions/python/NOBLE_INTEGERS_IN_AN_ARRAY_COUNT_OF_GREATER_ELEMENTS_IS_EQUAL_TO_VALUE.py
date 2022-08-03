def nobleInteger ( arr, size ) :
    for i in range ( 0, size ) :
        count = 0
        for j in range ( 0, size ) :
            if ( arr [ i ] < arr [ j ] ) :
                count += 1
        if ( count == arr [ i ] ) :
            return arr [ i ]
    return - 1
