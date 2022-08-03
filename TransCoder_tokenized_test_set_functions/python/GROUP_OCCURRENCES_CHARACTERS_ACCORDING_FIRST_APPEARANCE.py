def printGrouped ( string ) :
    n = len ( string )
    count = [ 0 ] * MAX_CHAR
    for i in range ( n ) :
        count [ ord ( string [ i ] ) - ord ( "a" ) ] += 1
    for i in range ( n ) :
        while count [ ord ( string [ i ] ) - ord ( "a" ) ] :
            print ( string [ i ], end = "" )
            count [ ord ( string [ i ] ) - ord ( "a" ) ] -= 1
        count [ ord ( string [ i ] ) - ord ( "a" ) ] = 0
    
