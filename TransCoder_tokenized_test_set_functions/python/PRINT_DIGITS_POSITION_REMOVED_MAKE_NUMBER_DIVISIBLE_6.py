def greatest ( s ) :
    n = len ( s )
    a = [ 0 for i in range ( n ) ]
    Sum = 0
    for i in range ( n ) :
        a [ i ] = ord ( s [ i ] ) - ord ( '0' )
        Sum += a [ i ]
    if ( a [ n - 1 ] % 2 ) :
        if ( a [ n - 2 ] % 2 != 0 or ( Sum - a [ n - 1 ] ) % 3 != 0 ) :
            print ( "-1" )
        else :
            print ( n )
    else :
        re = Sum % 3
        dell = - 1
        flag = 0
        for i in range ( n - 1 ) :
            if ( ( a [ i ] ) % 3 == re ) :
                if ( a [ i + 1 ] > a [ i ] ) :
                    dell = i
                    flag = 1
                    break
                else :
                    dell = i
        if ( flag == 0 ) :
            if ( a [ n - 2 ] % 2 == 0 and re == a [ n - 1 ] % 3 ) :
                dell = n - 1
        if ( dell == - 1 ) :
            print ( "-1" )
        else :
            print ( dell + 1 )
    
