def kLargest ( arr, k ) :
    arr . sort ( reverse = True )
    for i in range ( k ) :
        print ( arr [ i ], end = " " )
    
