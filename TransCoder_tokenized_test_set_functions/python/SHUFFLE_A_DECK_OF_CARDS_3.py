def shuffle ( card, n ) :
    for i in range ( n ) :
        r = i + ( random . randint ( 0, 55 ) % ( 52 - i ) )
        tmp = card [ i ]
        card [ i ] = card [ r ]
        card [ r ] = tmp
    
