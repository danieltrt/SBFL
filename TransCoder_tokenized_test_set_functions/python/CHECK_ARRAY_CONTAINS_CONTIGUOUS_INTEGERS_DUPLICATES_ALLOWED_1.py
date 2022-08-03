def areElementsContiguous ( arr ) :
    us = set ( )
    for i in arr : us . add ( i )
    count = 1
    curr_ele = arr [ 0 ] - 1
    while curr_ele in us :
        count += 1
        curr_ele -= 1
    curr_ele = arr [ 0 ] + 1
    while curr_ele in us :
        count += 1
        curr_ele += 1
    return ( count == len ( us ) )
