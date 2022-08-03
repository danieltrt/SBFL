def replaceOriginal ( s, n ) :
    r = [ ' ' ] * n
    for i in range ( n ) :
        r [ i ] = s [ n - 1 - i ]
        if ( s [ i ] != 'a' and s [ i ] != 'e' and s [ i ] != 'i' and s [ i ] != 'o' and s [ i ] != 'u' ) :
            print ( r [ i ], end = "" )
    print ( )
