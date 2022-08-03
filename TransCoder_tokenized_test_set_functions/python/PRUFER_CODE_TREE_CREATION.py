def printTreeEdges ( prufer, m ) :
    vertices = m + 2
    vertex_set = [ 0 ] * vertices
    for i in range ( vertices - 2 ) :
        vertex_set [ prufer [ i ] - 1 ] += 1
    print ( "The edge set E(G) is :" )
    j = 0
    for i in range ( vertices - 2 ) :
        for j in range ( vertices ) :
            if ( vertex_set [ j ] == 0 ) :
                vertex_set [ j ] = - 1
                print ( "(", ( j + 1 ), ", ", prufer [ i ], ") ", sep = "", end = "" )
                vertex_set [ prufer [ i ] - 1 ] -= 1
                break
    j = 0
    for i in range ( vertices ) :
        if ( vertex_set [ i ] == 0 and j == 0 ) :
            print ( "(", ( i + 1 ), ", ", sep = "", end = "" )
            j += 1
        elif ( vertex_set [ i ] == 0 and j == 1 ) :
            print ( ( i + 1 ), ")" )
    
