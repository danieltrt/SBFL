def pairs ( arr, n, k ) :
    smallest = 999999999999
    count = 0
    for i in range ( n ) :
        for j in range ( i + 1, n ) :
            if abs ( arr [ i ] + arr [ j ] - k ) < smallest :
                smallest = abs ( arr [ i ] + arr [ j ] - k )
                count = 1
            elif abs ( arr [ i ] + arr [ j ] - k ) == smallest :
                count += 1
    print ( "Minimal Value = ", smallest )
    print ( "Total Pairs = ", count )
