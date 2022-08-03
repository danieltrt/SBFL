def findRepeatingNumber ( arr, n ) :
    sq = sqrt ( n )
    range__ = int ( ( n / sq ) + 1 )
    count = [ 0 for i in range ( range__ ) ]
    for i in range ( 0, n + 1, 1 ) :
        count [ int ( ( arr [ i ] - 1 ) / sq ) ] += 1
    selected_block = range__ - 1
    for i in range ( 0, range__ - 1, 1 ) :
        if ( count [ i ] > sq ) :
            selected_block = i
            break
    m = {
    i : 0 for i in range ( n ) }
    
    for i in range ( 0, n + 1, 1 ) :
        if ( ( ( selected_block * sq ) < arr [ i ] ) and ( arr [ i ] <= ( ( selected_block + 1 ) * sq ) ) ) :
            m [ arr [ i ] ] += 1
            if ( m [ arr [ i ] ] > 1 ) :
                return arr [ i ]
    return - 1
