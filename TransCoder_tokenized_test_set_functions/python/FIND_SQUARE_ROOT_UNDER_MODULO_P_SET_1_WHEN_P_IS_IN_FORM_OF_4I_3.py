def squareRoot ( n, p ) :
    n = n % p
    for x in range ( 2, p ) :
        if ( ( x * x ) % p == n ) :
            print ( "Square root is ", x )
            return
    print ( "Square root doesn't exist" )
