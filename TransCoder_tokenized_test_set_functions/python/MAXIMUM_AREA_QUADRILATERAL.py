def maxArea ( a, b, c, d ) :
    semiperimeter = ( a + b + c + d ) / 2
    return math . sqrt ( ( semiperimeter - a ) * ( semiperimeter - b ) * ( semiperimeter - c ) * ( semiperimeter - d ) )
