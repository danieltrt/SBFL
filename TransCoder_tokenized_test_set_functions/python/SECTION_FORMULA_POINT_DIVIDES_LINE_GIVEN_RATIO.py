def section ( x1, x2, y1, y2, m, n ) :
    x = ( float ) ( ( n * x1 ) + ( m * x2 ) ) / ( m + n )
    y = ( float ) ( ( n * y1 ) + ( m * y2 ) ) / ( m + n )
    print ( x, y )
