def minRange ( arr, n, k ) :
    l = 0
    r = n
    for i in range ( n ) :
        s = [ ]
        for j in range ( i, n ) :
            s . append ( arr [ j ] )
            if ( len ( s ) == k ) :
                if ( ( j - i ) < ( r - l ) ) :
                    r = j
                    l = i
                break
        if ( j == n ) :
            break
    if ( l == 0 and r == n ) :
        print ( "Invalid k" )
    else :
        print ( l, r )
    
