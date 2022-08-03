def sequence ( n ) :
    f = [ 0, 1, 1 ]
    print ( f [ 1 ], end = " " ),
    print ( f [ 2 ], end = " " ),
    for i in range ( 3, n + 1 ) :
        f . append ( f [ f [ i - 1 ] ] + f [ i - f [ i - 1 ] ] )
        print ( f [ i ], end = " " ),
    
