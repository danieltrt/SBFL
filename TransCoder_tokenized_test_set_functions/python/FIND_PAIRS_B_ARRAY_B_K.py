def printPairs ( arr, n, k ) :
    isPairFound = True
    for i in range ( 0, n ) :
        for j in range ( 0, n ) :
            if ( i != j and arr [ i ] % arr [ j ] == k ) :
                print ( "(", arr [ i ], ", ", arr [ j ], ")", sep = "", end = " " )
                isPairFound = True
    return isPairFound
