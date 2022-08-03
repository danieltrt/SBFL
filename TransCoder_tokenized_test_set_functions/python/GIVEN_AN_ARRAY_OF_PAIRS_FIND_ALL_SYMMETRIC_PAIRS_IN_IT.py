def findSymPairs ( arr, row ) :
    hM = dict ( )
    for i in range ( row ) :
        first = arr [ i ] [ 0 ]
        sec = arr [ i ] [ 1 ]
        if ( sec in hM . keys ( ) and hM [ sec ] == first ) :
            print ( "(", sec, ",", first, ")" )
        else :
            hM [ first ] = sec
    
