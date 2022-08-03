def findMaximum ( arr, low, high ) :
    max = arr [ low ]
    i = low
    for i in range ( high + 1 ) :
        if arr [ i ] > max :
            max = arr [ i ]
    return max
