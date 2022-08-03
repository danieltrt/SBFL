def alternateSubarray ( arr, n ) :
    count = 1
    prev = arr [ 0 ]
    for i in range ( 1, n ) :
        if ( ( arr [ i ] ^ prev ) == 0 ) :
            while ( count ) :
                print ( count, end = " " )
                count -= 1
        count += 1
        prev = arr [ i ]
    while ( count ) :
        print ( count, end = " " )
        count -= 1
    
