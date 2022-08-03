def printMinIndexChar ( Str, patt ) :
    minIndex = 10 * * 9
    m = len ( Str )
    n = len ( patt )
    for i in range ( n ) :
        for j in range ( m ) :
            if ( patt [ i ] == Str [ j ] and j < minIndex ) :
                minIndex = j
                break
    if ( minIndex != 10 * * 9 ) :
        print ( "Minimum Index Character = ", Str [ minIndex ] )
    else :
        print ( "No character present" )
    
