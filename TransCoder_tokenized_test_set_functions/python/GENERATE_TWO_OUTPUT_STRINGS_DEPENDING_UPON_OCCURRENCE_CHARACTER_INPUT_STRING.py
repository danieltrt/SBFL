def printDuo ( string ) :
    countChar = [ 0 for i in range ( MAX_CHAR ) ]
    n = len ( string )
    for i in range ( n ) :
        countChar [ ord ( string [ i ] ) - ord ( 'a' ) ] += 1
    str1 = ""
    str2 = ""
    for i in range ( MAX_CHAR ) :
        if ( countChar [ i ] > 1 ) :
            str2 = str2 + chr ( i + ord ( 'a' ) )
        elif ( countChar [ i ] == 1 ) :
            str1 = str1 + chr ( i + ord ( 'a' ) )
    print ( "String with characters occurring once:", "\n", str1 )
    print ( "String with characters occurring", "multiple times:", "\n", str2 )
