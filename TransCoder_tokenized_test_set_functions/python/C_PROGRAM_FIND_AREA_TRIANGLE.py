def findArea ( a, b, c ) :
    if ( a < 0 or b < 0 or c < 0 or ( a + b <= c ) or ( a + c <= b ) or ( b + c <= a ) ) :
        print ( 'Not a valid trianglen' )
        return
    s = ( a + b + c ) / 2
    area = ( s * ( s - a ) * ( s - b ) * ( s - c ) ) * * 0.5
    print ( 'Area of a traingle is %f' % area )
