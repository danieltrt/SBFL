def smallestSubsegment ( a, n ) :
    left = dict ( )
    count = dict ( )
    mx = 0
    mn, strindex = 0, 0
    for i in range ( n ) :
        x = a [ i ]
        if ( x not in count . keys ( ) ) :
            left [ x ] = i
            count [ x ] = 1
        else :
            count [ x ] += 1
        if ( count [ x ] > mx ) :
            mx = count [ x ]
            mn = i - left [ x ] + 1
            strindex = left [ x ]
        elif ( count [ x ] == mx and i - left [ x ] + 1 < mn ) :
            mn = i - left [ x ] + 1
            strindex = left [ x ]
    for i in range ( strindex, strindex + mn ) :
        print ( a [ i ], end = " " )
    
