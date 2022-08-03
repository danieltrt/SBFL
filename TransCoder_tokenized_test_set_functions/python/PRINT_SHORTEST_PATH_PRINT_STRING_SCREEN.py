def printPath ( str ) :
    i = 0
    curX = 0
    curY = 0
    while ( i < len ( str ) ) :
        nextX = int ( ( ord ( str [ i ] ) - ord ( 'A' ) ) / 5 )
        nextY = ( ord ( str [ i ] ) - ord ( 'B' ) + 1 ) % 5
        while ( curX > nextX ) :
            print ( "Move Up" )
            curX -= 1
        while ( curY > nextY ) :
            print ( "Move Left" )
            curY -= 1
        while ( curX < nextX ) :
            print ( "Move Down" )
            curX += 1
        while ( curY < nextY ) :
            print ( "Move Right" )
            curY += 1
        print ( "Press OK" )
        i += 1
    
