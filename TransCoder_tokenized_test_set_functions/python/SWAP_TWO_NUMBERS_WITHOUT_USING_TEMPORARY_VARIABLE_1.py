def swap ( xp, yp ) :
    if ( xp [ 0 ] == yp [ 0 ] ) :
        return
    xp [ 0 ] = xp [ 0 ] + yp [ 0 ]
    yp [ 0 ] = xp [ 0 ] - yp [ 0 ]
    xp [ 0 ] = xp [ 0 ] - yp [ 0 ]
