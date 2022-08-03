def maximizecube ( l, b, h ) :
    side = gcd ( l, gcd ( b, h ) )
    num = int ( l / side )
    num = int ( num * b / side )
    num = int ( num * h / side )
    print ( side, num )
