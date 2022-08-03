def findpath ( graph ) :
    n = len ( graph )
    numofadj = list ( )
    for i in range ( n ) :
        numofadj . append ( sum ( graph [ i ] ) )
    startpoint = 0
    numofodd = 0
    for i in range ( n - 1, - 1, - 1 ) :
        if ( numofadj [ i ] % 2 == 1 ) :
            numofodd += 1
            startpoint = i
    if ( numofodd > 2 ) :
        print ( "No Solution" )
        return
    stack = list ( )
    path = list ( )
    cur = startpoint
    while ( stack != [ ] or sum ( graph [ cur ] ) != 0 ) :
        if ( sum ( graph [ cur ] ) == 0 ) :
            path . append ( cur + 1 )
            cur = stack . pop ( - 1 )
        else :
            for i in range ( n ) :
                if graph [ cur ] [ i ] == 1 :
                    stack . append ( cur )
                    graph [ cur ] [ i ] = 0
                    graph [ i ] [ cur ] = 0
                    cur = i
                    break
    for ele in path :
        print ( ele, "-> ", end = '' )
    print ( cur + 1 )
