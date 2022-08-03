def nobleInteger ( arr ) :
    arr . sort ( )
    n = len ( arr )
    for i in range ( n - 1 ) :
        if arr [ i ] == arr [ i + 1 ] :
            continue
        if arr [ i ] == n - i - 1 :
            return arr [ i ]
    if arr [ n - 1 ] == 0 :
        return arr [ n - 1 ]
    return - 1
