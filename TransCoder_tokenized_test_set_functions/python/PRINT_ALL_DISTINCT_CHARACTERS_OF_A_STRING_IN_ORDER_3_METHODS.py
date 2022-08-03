def printDistinct ( str ) :
    count = [ 0 ] * NO_OF_CHARS
    for i in range ( len ( str ) ) :
        if ( str [ i ] != ' ' ) :
            count [ ord ( str [ i ] ) ] += 1
    n = i
    for i in range ( n ) :
        if ( count [ ord ( str [ i ] ) ] == 1 ) :
            print ( str [ i ], end = "" )
    
