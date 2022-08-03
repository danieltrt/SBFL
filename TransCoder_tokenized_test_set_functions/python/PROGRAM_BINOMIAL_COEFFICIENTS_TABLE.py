def printbinomial ( max ) :
    for m in range ( max + 1 ) :
        print ( '% 2d' % m, end = ' ' )
        binom = 1
        for x in range ( m + 1 ) :
            if m != 0 and x != 0 :
                binom = binom * ( m - x + 1 ) / x
            print ( '% 4d' % binom, end = ' ' )
        print ( "\n", end = '' )
    
