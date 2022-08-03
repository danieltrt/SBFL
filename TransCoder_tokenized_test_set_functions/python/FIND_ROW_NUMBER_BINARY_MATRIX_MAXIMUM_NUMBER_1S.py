def findMax ( arr ) :
    row = 0
    j = N - 1
    for i in range ( 0, N ) :
        while ( arr [ i ] [ j ] == 1 and j >= 0 ) :
            row = i
            j -= 1
    print ( "Row number = ", row + 1, ", MaxCount = ", N - 1 - j )
