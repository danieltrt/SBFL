def minheapify ( a, index ) :
    small = index
    l = 2 * index + 1
    r = 2 * index + 2
    if ( l < n and a [ l ] < a [ small ] ) :
        small = l
    if ( r < n and a [ r ] < a [ small ] ) :
        small = r
    if ( small != index ) :
        ( a [ small ], a [ index ] ) = ( a [ index ], a [ small ] )
        minheapify ( a, small )
    
