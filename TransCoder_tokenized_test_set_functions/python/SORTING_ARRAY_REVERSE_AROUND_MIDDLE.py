def ifPossible ( arr, n ) :
    cp = [ 0 ] * n
    cp = arr
    cp . sort ( )
    for i in range ( 0, n ) :
        if ( not ( arr [ i ] == cp [ i ] ) and not ( arr [ n - 1 - i ] == cp [ i ] ) ) :
            return False
    return True
