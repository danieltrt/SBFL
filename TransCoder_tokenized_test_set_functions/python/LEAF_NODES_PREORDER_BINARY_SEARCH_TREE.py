def leafNode ( preorder, n ) :
    s = [ ]
    i = 0
    for j in range ( 1, n ) :
        found = False
        if preorder [ i ] > preorder [ j ] :
            s . append ( preorder [ i ] )
        else :
            while len ( s ) != 0 :
                if preorder [ j ] > s [ - 1 ] :
                    s . pop ( - 1 )
                    found = True
                else :
                    break
        if found :
            print ( preorder [ i ], end = " " )
        i += 1
    print ( preorder [ n - 1 ] )
