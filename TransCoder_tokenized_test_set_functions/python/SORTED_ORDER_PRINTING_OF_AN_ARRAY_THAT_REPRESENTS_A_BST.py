def printSorted ( arr, start, end ) :
    if start > end :
        return
    printSorted ( arr, start * 2 + 1, end )
    print ( arr [ start ], end = " " )
    printSorted ( arr, start * 2 + 2, end )
