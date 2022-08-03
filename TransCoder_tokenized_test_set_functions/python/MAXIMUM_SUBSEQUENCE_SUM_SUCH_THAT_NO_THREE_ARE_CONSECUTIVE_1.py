def maxSumWO3Consec ( n ) :
    if ( sum [ n ] != - 1 ) :
        return sum [ n ]
    if ( n == 0 ) :
        sum [ n ] = 0
        return sum [ n ]
    if ( n == 1 ) :
        sum [ n ] = arr [ 0 ]
        return sum [ n ]
    if ( n == 2 ) :
        sum [ n ] = arr [ 1 ] + arr [ 0 ]
        return sum [ n ]
    sum [ n ] = max ( max ( maxSumWO3Consec ( n - 1 ), maxSumWO3Consec ( n - 2 ) + arr [ n - 1 ] ), arr [ n - 2 ] + arr [ n - 1 ] + maxSumWO3Consec ( n - 3 ) )
    return sum [ n ]
