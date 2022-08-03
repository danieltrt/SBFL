def printString ( str, ch, count ) :
    occ, i = 0, 0
    if ( count == 0 ) :
        print ( str )
    for i in range ( len ( str ) ) :
        if ( str [ i ] == ch ) :
            occ += 1
        if ( occ == count ) :
            break
    if ( i < len ( str ) - 1 ) :
        print ( str [ i + 1 : len ( str ) - i + 2 ] )
    else :
        print ( "Empty string" )
    
