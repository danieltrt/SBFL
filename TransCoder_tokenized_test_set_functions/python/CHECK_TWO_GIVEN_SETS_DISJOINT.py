def areDisjoint ( set1, set2, m, n ) :
    for i in range ( 0, m ) :
        for j in range ( 0, n ) :
            if ( set1 [ i ] == set2 [ j ] ) :
                return False
    return True
