def checkStar ( mat ) :
    global size
    vertexD1 = 0
    vertexDn_1 = 0
    if ( size == 1 ) :
        return ( mat [ 0 ] [ 0 ] == 0 )
    if ( size == 2 ) :
        return ( mat [ 0 ] [ 0 ] == 0 and mat [ 0 ] [ 1 ] == 1 and mat [ 1 ] [ 0 ] == 1 and mat [ 1 ] [ 1 ] == 0 )
    for i in range ( 0, size ) :
        degreeI = 0
        for j in range ( 0, size ) :
            if ( mat [ i ] [ j ] ) :
                degreeI = degreeI + 1
        if ( degreeI == 1 ) :
            vertexD1 = vertexD1 + 1
        elif ( degreeI == size - 1 ) :
            vertexDn_1 = vertexDn_1 + 1
    return ( vertexD1 == ( size - 1 ) and vertexDn_1 == 1 )
