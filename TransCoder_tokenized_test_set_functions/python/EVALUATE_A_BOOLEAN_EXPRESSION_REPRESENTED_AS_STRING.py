def evaluateBoolExpr ( s ) :
    n = len ( s )
    for i in range ( 0, n - 2, 2 ) :
        if ( s [ i + 1 ] == "A" ) :
            if ( s [ i + 2 ] == "0" or s [ i ] == "0" ) :
                s [ i + 2 ] = "0"
            else :
                s [ i + 2 ] = "1"
        elif ( s [ i + 1 ] == "B" ) :
            if ( s [ i + 2 ] == "1" or s [ i ] == "1" ) :
                s [ i + 2 ] = "1"
            else :
                s [ i + 2 ] = "0"
        else :
            if ( s [ i + 2 ] == s [ i ] ) :
                s [ i + 2 ] = "0"
            else :
                s [ i + 2 ] = "1"
    return ord ( s [ n - 1 ] ) - ord ( "0" )
