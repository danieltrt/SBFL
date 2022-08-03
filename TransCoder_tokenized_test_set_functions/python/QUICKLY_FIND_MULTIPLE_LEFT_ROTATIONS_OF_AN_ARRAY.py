def leftRotate ( arr, n, k ) :
    for i in range ( k, k + n ) :
        print ( str ( arr [ i % n ] ), end = " " )
    
