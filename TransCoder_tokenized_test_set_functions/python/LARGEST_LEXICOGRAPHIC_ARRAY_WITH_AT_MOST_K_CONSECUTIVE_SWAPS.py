def KSwapMaximum ( n, k ) :
    global arr
    for i in range ( 0, n - 1 ) :
        if ( k > 0 ) :
            indexPosition = i
            for j in range ( i + 1, n ) :
                if ( k <= j - i ) :
                    break
                if ( arr [ j ] > arr [ indexPosition ] ) :
                    indexPosition = j
            for j in range ( indexPosition, i, - 1 ) :
                t = arr [ j ]
                arr [ j ] = arr [ j - 1 ]
                arr [ j - 1 ] = t
            k = k - indexPosition - i
    
