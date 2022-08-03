def Print ( n, k ) :
    rem = 1
    for i in range ( 0, k ) :
        print ( math . floor ( ( ( 10 * rem ) / n ) ), end = "" )
        rem = ( 10 * rem ) % n
    
