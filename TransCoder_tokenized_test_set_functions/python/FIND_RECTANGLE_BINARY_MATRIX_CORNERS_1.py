def isRectangle ( m ) :
    rows = len ( m )
    if ( rows == 0 ) :
        return False
    columns = len ( m [ 0 ] )
    for y1 in range ( rows ) :
        for x1 in range ( columns ) :
            if ( m [ y1 ] [ x1 ] == 1 ) :
                for y2 in range ( y1 + 1, rows ) :
                    for x2 in range ( x1 + 1, columns ) :
                        if ( m [ y1 ] [ x2 ] == 1 and m [ y2 ] [ x1 ] == 1 and m [ y2 ] [ x2 ] == 1 ) :
                            return True
    return False
