def modularEquation ( a, b ) :
    if ( a < b ) :
        print ( "No solution possible " )
        return
    if ( a == b ) :
        print ( "Infinite Solution possible " )
        return
    count = 0
    n = a - b
    y = ( int ) ( math . sqrt ( a - b ) )
    for i in range ( 1, y + 1 ) :
        if ( n % i == 0 ) :
            if ( n / i > b ) :
                count = count + 1
            if ( i > b ) :
                count = count + 1
    if ( y * y == n and y > b ) :
        count = count - 1
    print ( count )
