def countWords ( str, l ) :
    count = 1;
    
    if ( l == 1 ) :
        return count
    if ( str [ 0 ] == str [ 1 ] ) :
        count *= 1
    else :
        count *= 2
    for j in range ( 1, l - 1 ) :
        if ( str [ j ] == str [ j - 1 ] and str [ j ] == str [ j + 1 ] ) :
            count *= 1
        elif ( str [ j ] == str [ j - 1 ] or str [ j ] == str [ j + 1 ] or str [ j - 1 ] == str [ j + 1 ] ) :
            count *= 2
        else :
            count *= 3
    if ( str [ l - 1 ] == str [ l - 2 ] ) :
        count *= 1
    else :
        count *= 2
    return count
