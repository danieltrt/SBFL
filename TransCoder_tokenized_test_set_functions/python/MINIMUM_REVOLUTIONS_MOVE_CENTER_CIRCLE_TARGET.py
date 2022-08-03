def minRevolutions ( r, x1, y1, x2, y2 ) :
    d = math . sqrt ( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) )
    return math . ceil ( d //(2*r))
