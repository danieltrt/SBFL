def printLevels ( graph, V, x ) :
    level = [ None ] * V
    marked = [ False ] * V
    que = queue . Queue ( )
    que . put ( x )
    level [ x ] = 0
    marked [ x ] = True
    while ( not que . empty ( ) ) :
        x = que . get ( )
        for i in range ( len ( graph [ x ] ) ) :
            b = graph [ x ] [ i ]
            if ( not marked [ b ] ) :
                que . put ( b )
                level [ b ] = level [ x ] + 1
                marked [ b ] = True
    print ( "Nodes", " ", "Level" )
    for i in range ( V ) :
        print ( " ", i, " --> ", level [ i ] )
    
