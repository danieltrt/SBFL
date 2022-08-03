def maximumChars ( str1 ) :
    n = len ( str1 )
    res = - 1
    firstInd = [ - 1 for i in range ( MAX_CHAR ) ]
    for i in range ( n ) :
        first_ind = firstInd [ ord ( str1 [ i ] ) ]
        if ( first_ind == - 1 ) :
            firstInd [ ord ( str1 [ i ] ) ] = i
        else :
            res = max ( res, abs ( i - first_ind - 1 ) )
    return res
