def isSubSeqDivisible ( str ) :
    n = len ( str )
    dp = [ [ 0 for i in range ( 10 ) ] for i in range ( n + 1 ) ]
    arr = [ 0 for i in range ( n + 1 ) ]
    for i in range ( 1, n + 1 ) :
        arr [ i ] = int ( str [ i - 1 ] );
        
    for i in range ( 1, n + 1 ) :
        dp [ i ] [ arr [ i ] % 8 ] = 1;
        
        for j in range ( 8 ) :
            if ( dp [ i - 1 ] [ j ] > dp [ i ] [ ( j * 10 + arr [ i ] ) % 8 ] ) :
                dp [ i ] [ ( j * 10 + arr [ i ] ) % 8 ] = dp [ i - 1 ] [ j ]
            if ( dp [ i - 1 ] [ j ] > dp [ i ] [ j ] ) :
                dp [ i ] [ j ] = dp [ i - 1 ] [ j ]
    for i in range ( 1, n + 1 ) :
        if ( dp [ i ] [ 0 ] == 1 ) :
            return True
    return False
