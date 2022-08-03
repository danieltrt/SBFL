def SumOfKsubArray ( arr, n, k ) :
    Sum = 0
    S = deque ( )
    G = deque ( )
    for i in range ( k ) :
        while ( len ( S ) > 0 and arr [ S [ - 1 ] ] >= arr [ i ] ) :
            S . pop ( )
        while ( len ( G ) > 0 and arr [ G [ - 1 ] ] <= arr [ i ] ) :
            G . pop ( )
        G . append ( i )
        S . append ( i )
    for i in range ( k, n ) :
        Sum += arr [ S [ 0 ] ] + arr [ G [ 0 ] ]
        while ( len ( S ) > 0 and S [ 0 ] <= i - k ) :
            S . popleft ( )
        while ( len ( G ) > 0 and G [ 0 ] <= i - k ) :
            G . popleft ( )
        while ( len ( S ) > 0 and arr [ S [ - 1 ] ] >= arr [ i ] ) :
            S . pop ( )
        while ( len ( G ) > 0 and arr [ G [ - 1 ] ] <= arr [ i ] ) :
            G . pop ( )
        G . append ( i )
        S . append ( i )
    Sum += arr [ S [ 0 ] ] + arr [ G [ 0 ] ]
    return Sum
