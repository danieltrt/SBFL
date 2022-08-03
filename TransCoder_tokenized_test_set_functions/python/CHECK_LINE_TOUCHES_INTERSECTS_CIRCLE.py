def checkCollision ( a, b, c, x, y, radius ) :
    dist = ( ( abs ( a * x + b * y + c ) ) / math . sqrt ( a * a + b * b ) )
    if ( radius == dist ) :
        print ( "Touch" )
    elif ( radius > dist ) :
        print ( "Intersect" )
    else :
        print ( "Outside" )
    
