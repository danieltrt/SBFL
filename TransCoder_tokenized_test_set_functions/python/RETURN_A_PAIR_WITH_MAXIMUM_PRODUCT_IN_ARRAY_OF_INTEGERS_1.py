def maxProduct ( arr, n ) :
    if ( n < 2 ) :
        print ( "No pairs exists" )
        return
    if ( n == 2 ) :
        print ( arr [ 0 ], " ", arr [ 1 ] )
        return
    posa = 0
    posb = 0
    nega = 0
    negb = 0
    for i in range ( n ) :
        if ( arr [ i ] > posa ) :
            posb = posa
            posa = arr [ i ]
        elif ( arr [ i ] > posb ) :
            posb = arr [ i ]
        if ( arr [ i ] < 0 and abs ( arr [ i ] ) > abs ( nega ) ) :
            negb = nega
            nega = arr [ i ]
        elif ( arr [ i ] < 0 and abs ( arr [ i ] ) > abs ( negb ) ) :
            negb = arr [ i ]
    if ( nega * negb > posa * posb ) :
        print ( "Max product pair is {", nega, ", ", negb, "}" )
    else :
        print ( "Max product pair is {", posa, ", ", posb, "}" )
    
