def nthRoot ( A, N ) :
    xPre = random . randint ( 1, 101 ) % 10
    eps = 0.001
    delX = 2147483647
    xK = 0.0
    while ( delX > eps ) :
        xK = ( ( N - 1.0 ) * xPre + A / pow ( xPre, N - 1 ) ) / N
        delX = abs ( xK - xPre )
        xPre = xK;
        
    return xK
