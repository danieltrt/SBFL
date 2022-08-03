def moveSpaceInFront ( s ) :
    i = len ( s ) - 1;
    
    for j in range ( i, - 1, - 1 ) :
        if ( s [ j ] != ' ' ) :
            s = s [ : i ] + s [ j ] + s [ i + 1 : ]
            i -= 1;
            
    while ( i >= 0 ) :
        s = s [ : i ] + ' ' + s [ i + 1 : ]
        i -= 1
    return s;
