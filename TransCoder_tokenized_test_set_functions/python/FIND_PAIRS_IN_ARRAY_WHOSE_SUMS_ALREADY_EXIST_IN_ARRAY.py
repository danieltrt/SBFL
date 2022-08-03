def findPair ( arr, n ) :
    found = False
    for i in range ( 0, n ) :
        for j in range ( i + 1, n ) :
            for k in range ( 0, n ) :
                if ( arr [ i ] + arr [ j ] == arr [ k ] ) :
                    print ( arr [ i ], arr [ j ] )
                    found = True
    if ( found == False ) :
        print ( "Not exist" )
    
