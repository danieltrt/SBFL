def unique ( mat, n, m ) :
    maximum = 0;
    flag = 0
    for i in range ( 0, n ) :
        for j in range ( 0, m ) :
            if ( maximum < mat [ i ] [ j ] ) :
                maximum = mat [ i ] [ j ];
                
    uniqueElementDict = [ 0 ] * ( maximum + 1 )
    for i in range ( 0, n ) :
        for j in range ( 0, m ) :
            uniqueElementDict [ mat [ i ] [ j ] ] += 1
    for key in range ( maximum + 1 ) :
        if uniqueElementDict [ key ] == 1 :
            print ( key, end = " " )
            flag = 1
    if ( flag == 0 ) :
        print ( "No unique element in the matrix" )
    
