def playGame ( arr, n ) :
    s = set ( )
    for i in range ( n ) :
        s . add ( arr [ i ] )
    return 1 if len ( s ) % 2 == 0 else 2
