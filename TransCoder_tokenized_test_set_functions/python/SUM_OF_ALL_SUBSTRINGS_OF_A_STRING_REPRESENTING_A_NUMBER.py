def sumOfSubstrings ( num ) :
    n = len ( num )
    sumofdigit = [ ]
    sumofdigit . append ( int ( num [ 0 ] ) )
    res = sumofdigit [ 0 ]
    for i in range ( 1, n ) :
        numi = int ( num [ i ] )
        sumofdigit . append ( ( i + 1 ) * numi + 10 * sumofdigit [ i - 1 ] )
        res += sumofdigit [ i ]
    return res
