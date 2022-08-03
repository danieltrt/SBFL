def waysToIncreaseLCSBy1 ( str1, str2 ) :
    m = len ( str1 )
    n = len ( str2 )
    position = [ [ ] for i in range ( M ) ]
    for i in range ( 1, n + 1, 1 ) :
        position [ ord ( str2 [ i - 1 ] ) - 97 ] . append ( i )
    lcsl = [ [ 0 for i in range ( n + 2 ) ] for j in range ( m + 2 ) ]
    lcsr = [ [ 0 for i in range ( n + 2 ) ] for j in range ( m + 2 ) ]
    for i in range ( 1, m + 1, 1 ) :
        for j in range ( 1, n + 1, 1 ) :
            if ( str1 [ i - 1 ] == str2 [ j - 1 ] ) :
                lcsl [ i ] [ j ] = 1 + lcsl [ i - 1 ] [ j - 1 ]
            else :
                lcsl [ i ] [ j ] = max ( lcsl [ i - 1 ] [ j ], lcsl [ i ] [ j - 1 ] )
    for i in range ( m, 0, - 1 ) :
        for j in range ( n, 0, - 1 ) :
            if ( str1 [ i - 1 ] == str2 [ j - 1 ] ) :
                lcsr [ i ] [ j ] = 1 + lcsr [ i + 1 ] [ j + 1 ]
            else :
                lcsr [ i ] [ j ] = max ( lcsr [ i + 1 ] [ j ], lcsr [ i ] [ j + 1 ] )
    ways = 0
    for i in range ( 0, m + 1, 1 ) :
        for C in range ( 0, 26, 1 ) :
            for j in range ( 0, len ( position [ C ] ), 1 ) :
                p = position [ C ] [ j ]
                if ( lcsl [ i ] [ p - 1 ] + lcsr [ i + 1 ] [ p + 1 ] == lcsl [ m ] [ n ] ) :
                    ways += 1
    return ways
