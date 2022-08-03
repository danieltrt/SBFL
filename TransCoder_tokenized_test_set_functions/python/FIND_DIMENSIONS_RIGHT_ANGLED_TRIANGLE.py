def findDimen ( H, A ) :
    if H * H < 4 * A :
        print ( "Not Possible" )
        return
    apb = sqrt ( H * H + 4 * A )
    asb = sqrt ( H * H - 4 * A )
    print ( "P = ", "%.2f" % ( ( apb - asb ) / 2.0 ) )
    print ( "B = ", "%.2f" % ( ( apb + asb ) / 2.0 ) )
