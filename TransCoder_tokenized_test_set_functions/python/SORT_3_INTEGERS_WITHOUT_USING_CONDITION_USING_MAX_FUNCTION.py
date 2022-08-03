def printSorted ( a, b, c ) :
    get_max = max ( a, max ( b, c ) )
    get_min = - max ( - a, max ( - b, - c ) )
    get_mid = ( a + b + c ) - ( get_max + get_min )
    print ( get_min, " ", get_mid, " ", get_max )
