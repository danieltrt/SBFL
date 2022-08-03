def concatenate ( a, b, c, n1, n2 ) :
    i = - 1
    for i in range ( n1 ) :
        c [ i ] = a [ i ]
    for j in range ( n2 ) :
        c [ i ] = b [ j ]
        i += 1
    
