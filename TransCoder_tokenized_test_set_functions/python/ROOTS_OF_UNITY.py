def printRoots ( n ) :
    theta = math . pi * 2 / n
    for k in range ( 0, n ) :
        real = math . cos ( k * theta )
        img = math . sin ( k * theta )
        print ( real, end = " " )
        if ( img >= 0 ) :
            print ( " + i ", end = " " )
        else :
            print ( " - i ", end = " " )
        print ( abs ( img ) )
    
