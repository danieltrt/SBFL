def findRandomIndexOfMax ( arr, n ) :
    mp = dict ( )
    for i in range ( n ) :
        if ( arr [ i ] in mp ) :
            mp [ arr [ i ] ] = mp [ arr [ i ] ] + 1
        else :
            mp [ arr [ i ] ] = 1
    max_element = - 323567
    max_so_far = - 323567
    for p in mp :
        if ( mp [ p ] > max_so_far ) :
            max_so_far = mp [ p ]
            max_element = p
    r = int ( ( ( random . randrange ( 1, max_so_far, 2 ) % max_so_far ) + 1 ) )
    i = 0
    count = 0
    while ( i < n ) :
        if ( arr [ i ] == max_element ) :
            count = count + 1
        if ( count == r ) :
            print ( "Element with maximum frequency present at index ", i )
            break
        i = i + 1
    
