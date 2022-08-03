def Restore_Tree ( S, E ) :
    Identity = N * [ 0 ]
    for i in range ( N ) :
        Identity [ Start [ i ] ] = i
    parent = N * [ - 1 ]
    curr_parent = Identity [ 0 ]
    for j in range ( 1, N ) :
        child = Identity [ j ]
        if End [ child ] - j > 1 :
            parent [ child ] = curr_parent
            curr_parent = child
        else :
            parent [ child ] = curr_parent
            while End [ child ] == End [ parent [ child ] ] :
                child = parent [ child ]
                curr_parent = parent [ child ]
                if curr_parent == Identity [ 0 ] :
                    break
    for i in range ( N ) :
        parent [ i ] += 1
    return parent
