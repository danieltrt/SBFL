def largestKSubmatrix ( a ) :
    dp = [ [ 0 for x in range ( Row ) ] for y in range ( Col ) ]
    result = 0
    for i in range ( Row ) :
        for j in range ( Col ) :
            if ( i == 0 or j == 0 ) :
                dp [ i ] [ j ] = 1
            else :
                if ( a [ i ] [ j ] == a [ i - 1 ] [ j ] and a [ i ] [ j ] == a [ i ] [ j - 1 ] and a [ i ] [ j ] == a [ i - 1 ] [ j - 1 ] ) :
                    dp [ i ] [ j ] = min ( min ( dp [ i - 1 ] [ j ], dp [ i ] [ j - 1 ] ), dp [ i - 1 ] [ j - 1 ] ) + 1
                else :
                    dp [ i ] [ j ] = 1
            result = max ( result, dp [ i ] [ j ] )
    return result
