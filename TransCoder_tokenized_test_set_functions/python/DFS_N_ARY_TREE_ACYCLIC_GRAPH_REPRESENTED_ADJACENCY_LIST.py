def dfs ( List, node, arrival ) :
    print ( node )
    for i in range ( len ( List [ node ] ) ) :
        if ( List [ node ] [ i ] != arrival ) :
            dfs ( List, List [ node ] [ i ], node )
    
