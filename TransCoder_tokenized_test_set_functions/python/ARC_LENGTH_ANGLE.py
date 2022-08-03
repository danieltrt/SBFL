def arcLength ( diameter, angle ) :
    if angle >= 360 :
        print ( "Angle cannot be formed" )
        return 0
    else :
        arc = ( 3.142857142857143 * diameter ) * ( angle / 360.0 )
        return arc
    
