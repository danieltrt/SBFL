def direction ( R, C ) :
    if ( R != C and R % 2 == 0 and C % 2 != 0 and R < C ) :
        print ( "Left" )
        return
    if ( R != C and R % 2 == 0 and C % 2 == 0 and R > C ) :
        print ( "Up" )
        return
    if R == C and R % 2 != 0 and C % 2 != 0 :
        print ( "Right" )
        return
    if R == C and R % 2 == 0 and C % 2 == 0 :
        print ( "Left" )
        return
    if ( R != C and R % 2 != 0 and C % 2 != 0 and R < C ) :
        print ( "Right" )
        return
    if ( R != C and R % 2 != 0 and C % 2 != 0 and R > C ) :
        print ( "Down" )
        return
    if ( R != C and R % 2 == 0 and C % 2 != 0 and R < C ) :
        print ( "Left" )
        return
    if ( R != C and R % 2 == 0 and C % 2 == 0 and R > C ) :
        print ( "Up" )
        return
    if ( R != C and R % 2 != 0 and C % 2 != 0 and R > C ) :
        print ( "Down" )
        return
    if ( R != C and R % 2 != 0 and C % 2 != 0 and R < C ) :
        print ( "Right" )
        return
    
