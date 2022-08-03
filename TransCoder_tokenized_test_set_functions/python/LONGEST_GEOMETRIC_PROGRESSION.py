def lenOfLongestGP ( sett, n ) :
    if n < 2 :
        return n
    if n == 2 :
        return ( sett [ 1 ] % sett [ 0 ] == 0 )
    sett . sort ( )
    L = [ [ 0 for i in range ( n ) ] for i in range ( n ) ]
    llgp = 1
    for i in range ( 0, n ) :
        if sett [ n - 1 ] % sett [ i ] == 0 :
            L [ i ] [ n - 1 ] = 2
        else :
            L [ i ] [ n - 1 ] = 1
    for j in range ( n - 2, 0, - 1 ) :
        i = j - 1
        k = j + 1
        while i >= 0 and k <= n - 1 :
            if sett [ i ] * sett [ k ] < sett [ j ] * sett [ j ] :
                k += 1
            elif sett [ i ] * sett [ k ] > sett [ j ] * sett [ j ] :
                if sett [ j ] % sett [ i ] == 0 :
                    L [ i ] [ j ] = 2
                else :
                    L [ i ] [ j ] = 1
                i -= 1
            else :
                L [ i ] [ j ] = L [ j ] [ k ] + 1
                if L [ i ] [ j ] > llgp :
                    llgp = L [ i ] [ j ]
                i -= 1
                k + 1
        while i >= 0 :
            if sett [ j ] % sett [ i ] == 0 :
                L [ i ] [ j ] = 2
            else :
                L [ i ] [ j ] = 1
            i -= 1
    return llgp
