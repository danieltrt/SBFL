def minInsertion ( tr1 ) :
    n = len ( str1 )
    res = 0
    count = [ 0 for i in range ( 26 ) ]
    for i in range ( n ) :
        count [ ord ( str1 [ i ] ) - ord ( 'a' ) ] += 1
    for i in range ( 26 ) :
        if ( count [ i ] % 2 == 1 ) :
            res += 1
    if ( res == 0 ) :
        return 0
    else :
        return res - 1
    
