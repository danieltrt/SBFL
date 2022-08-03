def isDivisible999 ( num ) :
    n = len ( num );
    
    if ( n == 0 or num [ 0 ] == '0' ) :
        return true
    if ( ( n % 3 ) == 1 ) :
        num = "00" + num
    if ( ( n % 3 ) == 2 ) :
        num = "0" + num
    gSum = 0
    for i in range ( 0, n, 3 ) :
        group = 0
        group += ( ord ( num [ i ] ) - 48 ) * 100
        group += ( ord ( num [ i + 1 ] ) - 48 ) * 10
        group += ( ord ( num [ i + 2 ] ) - 48 )
        gSum += group
    if ( gSum > 1000 ) :
        num = str ( gSum )
        n = len ( num )
        gSum = isDivisible999 ( num )
    return ( gSum == 999 )
