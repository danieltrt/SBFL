def findFrequency ( arr, n, left, right, element ) :
    count = 0
    for i in range ( left - 1, right ) :
        if ( arr [ i ] == element ) :
            count += 1
    return count
