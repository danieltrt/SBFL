def printDistSum ( arr, n ) :
    Sum = sum ( arr )
    dp = [ [ False for i in range ( Sum + 1 ) ] for i in range ( n + 1 ) ]
    for i in range ( n + 1 ) :
        dp [ i ] [ 0 ] = True
    for i in range ( 1, n + 1 ) :
        dp [ i ] [ arr [ i - 1 ] ] = True
        for j in range ( 1, Sum + 1 ) :
            if ( dp [ i - 1 ] [ j ] == True ) :
                dp [ i ] [ j ] = True
                dp [ i ] [ j + arr [ i - 1 ] ] = True
    for j in range ( Sum + 1 ) :
        if ( dp [ n ] [ j ] == True ) :
            print ( j, end = " " )
    
