def checkPoint ( radius, x, y, percent, startAngle ) :
    endAngle = 360 / percent + startAngle
    polarradius = math . sqrt ( x * x + y * y )
    Angle = math . atan ( y / x )
    if ( Angle >= startAngle and Angle <= endAngle and polarradius < radius ) :
        print ( "Point (", x, ",", y, ") " "exist in the circle sector" )
    else :
        print ( "Point (", x, ",", y, ") " "does not exist in the circle sector" )
    
