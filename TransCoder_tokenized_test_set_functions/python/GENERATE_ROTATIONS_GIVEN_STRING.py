def printRotatedString ( str ) :
    lenn = len ( str )
    temp = [ 0 ] * ( lenn )
    for i in range ( lenn ) :
        j = i
        k = 0
        while ( j < len ( str ) ) :
            temp [ k ] = str [ j ]
            k += 1
            j += 1
        j = 0
        while ( j < i ) :
            temp [ k ] = str [ j ]
            j += 1
            k += 1
        print ( * temp, sep = "" )
    
