def findLIS ( A, n ) :
    hash = dict ( )
    LIS_size, LIS_index = 1, 0
    hash [ A [ 0 ] ] = 1
    for i in range ( 1, n ) :
        if A [ i ] - 1 not in hash :
            hash [ A [ i ] - 1 ] = 0
        hash [ A [ i ] ] = hash [ A [ i ] - 1 ] + 1
        if LIS_size < hash [ A [ i ] ] :
            LIS_size = hash [ A [ i ] ]
            LIS_index = A [ i ]
    print ( "LIS_size =", LIS_size )
    print ( "LIS : ", end = "" )
    start = LIS_index - LIS_size + 1
    while start <= LIS_index :
        print ( start, end = " " )
        start += 1
    
