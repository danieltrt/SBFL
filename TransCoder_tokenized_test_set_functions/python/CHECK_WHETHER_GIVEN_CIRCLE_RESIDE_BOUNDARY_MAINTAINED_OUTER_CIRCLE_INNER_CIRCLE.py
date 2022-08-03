def fitOrNotFit ( R, r, x, y, rad ) :
    val = math . sqrt ( math . pow ( x, 2 ) + math . pow ( y, 2 ) )
    if ( val + rad <= R and val - rad >= R - r ) :
        print ( "Fits\n" )
    else :
        print ( "Doesn't Fit" )
    
