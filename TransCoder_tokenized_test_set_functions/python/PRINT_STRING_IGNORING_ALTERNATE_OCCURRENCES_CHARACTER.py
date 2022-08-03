def printStringAlternate ( string ) :
    occ = {
    }
    
    for i in range ( 0, len ( string ) ) :
        temp = string [ i ] . lower ( )
        occ [ temp ] = occ . get ( temp, 0 ) + 1
        if occ [ temp ] & 1 :
            print ( string [ i ], end = "" )
    print ( )
