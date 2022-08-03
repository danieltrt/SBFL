def isDivisible ( str, k ) :
    n = len ( str )
    c = 0
    for i in range ( 0, k ) :
        if ( str [ n - i - 1 ] == '0' ) :
            c += 1
    return ( c == k )
