def findDivision ( str, a, b ) :
    lenn = len ( str )
    lr = [ 0 ] * ( lenn + 1 )
    lr [ 0 ] = ( int ( str [ 0 ] ) ) % a
    for i in range ( 1, lenn ) :
        lr [ i ] = ( ( lr [ i - 1 ] * 10 ) % a + \ int ( str [ i ] ) ) % a
    rl = [ 0 ] * ( lenn + 1 )
    rl [ lenn - 1 ] = int ( str [ lenn - 1 ] ) % b
    power10 = 10
    for i in range ( lenn - 2, - 1, - 1 ) :
        rl [ i ] = ( rl [ i + 1 ] + int ( str [ i ] ) * power10 ) % b
        power10 = ( power10 * 10 ) % b
    for i in range ( 0, lenn - 1 ) :
        if ( lr [ i ] != 0 ) :
            continue
        if ( rl [ i + 1 ] == 0 ) :
            print ( "YES" )
            for k in range ( 0, i + 1 ) :
                print ( str [ k ], end = "" )
            print ( ",", end = " " )
            for i in range ( i + 1, lenn ) :
                print ( str [ k ], end = "" )
                return
    print ( "NO" )
