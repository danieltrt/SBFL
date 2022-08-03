def getSingle ( arr, n ) :
    result = 0
    for i in range ( 0, INT_SIZE ) :
        sm = 0
        x = ( 1 << i )
        for j in range ( 0, n ) :
            if ( arr [ j ] & x ) :
                sm = sm + 1
        if ( sm % 3 ) :
            result = result | x
    return result
