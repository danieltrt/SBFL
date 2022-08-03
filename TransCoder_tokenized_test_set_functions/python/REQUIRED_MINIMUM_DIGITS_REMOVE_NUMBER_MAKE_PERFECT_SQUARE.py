def perfectSquare ( s ) :
    n = len ( s )
    ans = - 1
    num = ""
    for i in range ( 1, ( 1 << n ) ) :
        str = ""
        for j in range ( 0, n ) :
            if ( ( i >> j ) & 1 ) :
                str = str + s [ j ]
        if ( str [ 0 ] != '0' ) :
            temp = 0;
            
            for j in range ( 0, len ( str ) ) :
                temp = ( temp * 10 + ( ord ( str [ j ] ) - ord ( '0' ) ) )
            k = int ( math . sqrt ( temp ) )
            if ( k * k == temp ) :
                if ( ans < len ( str ) ) :
                    ans = len ( str )
                    num = str
    if ( ans == - 1 ) :
        return ans
    else :
        print ( "{} " . format ( num ), end = "" )
        return n - ans
    
