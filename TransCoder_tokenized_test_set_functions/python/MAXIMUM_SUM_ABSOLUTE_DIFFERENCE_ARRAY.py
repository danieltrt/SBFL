def MaxSumDifference ( a, n ) :
    np . sort ( a );
    
    j = 0
    finalSequence = [ 0 for x in range ( n ) ]
    for i in range ( 0, int ( n / 2 ) ) :
        finalSequence [ j ] = a [ i ]
        finalSequence [ j + 1 ] = a [ n - i - 1 ]
        j = j + 2
    MaximumSum = 0
    for i in range ( 0, n - 1 ) :
        MaximumSum = ( MaximumSum + abs ( finalSequence [ i ] - finalSequence [ i + 1 ] ) )
    MaximumSum = ( MaximumSum + abs ( finalSequence [ n - 1 ] - finalSequence [ 0 ] ) );
    
    print ( MaximumSum )
