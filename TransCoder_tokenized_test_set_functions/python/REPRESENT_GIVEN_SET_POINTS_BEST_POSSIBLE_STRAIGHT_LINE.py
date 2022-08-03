def bestApproximate ( x, y, n ) :
    sum_x = 0
    sum_y = 0
    sum_xy = 0
    sum_x2 = 0
    for i in range ( 0, n ) :
        sum_x += x [ i ]
        sum_y += y [ i ]
        sum_xy += x [ i ] * y [ i ]
        sum_x2 += pow ( x [ i ], 2 )
    m = ( float ) ( ( n * sum_xy - sum_x * sum_y ) / ( n * sum_x2 - pow ( sum_x, 2 ) ) );
    
    c = ( float ) ( sum_y - m * sum_x ) / n;
    
    print ( "m = ", m );
    
    print ( "c = ", c );
