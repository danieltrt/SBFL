def maxDiff ( arr, n ) :
    result = 0
    arr . sort ( )
    for i in range ( n - 1 ) :
        if ( abs ( arr [ i ] ) != abs ( arr [ i + 1 ] ) ) :
            result += abs ( arr [ i ] )
        else :
            pass
    if ( arr [ n - 2 ] != arr [ n - 1 ] ) :
        result += abs ( arr [ n - 1 ] )
    return result
