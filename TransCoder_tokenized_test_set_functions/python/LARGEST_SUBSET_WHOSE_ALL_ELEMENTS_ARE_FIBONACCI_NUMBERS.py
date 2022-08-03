def findFibSubset ( arr, n ) :
    m = max ( arr )
    a = 0
    b = 1
    hash = [ ]
    hash . append ( a )
    hash . append ( b )
    while ( b < m ) :
        c = a + b
        a = b
        b = c
        hash . append ( b )
    for i in range ( n ) :
        if arr [ i ] in hash :
            print ( arr [ i ], end = " " )
    
