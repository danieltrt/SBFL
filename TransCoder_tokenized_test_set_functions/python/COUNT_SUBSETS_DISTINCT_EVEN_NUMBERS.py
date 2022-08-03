def countSubSets ( arr, n ) :
    us = set ( )
    even_count = 0
    for i in range ( n ) :
        if arr [ i ] % 2 == 0 :
            us . add ( arr [ i ] )
    for i in us :
        even_count += 1
    return pow ( 2, even_count ) - 1
