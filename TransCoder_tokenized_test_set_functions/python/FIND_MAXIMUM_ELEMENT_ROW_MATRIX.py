def maxelement ( arr ) :
    no_of_rows = len ( arr )
    no_of_column = len ( arr [ 0 ] )
    for i in range ( no_of_rows ) :
        max1 = 0
        for j in range ( no_of_column ) :
            if arr [ i ] [ j ] > max1 :
                max1 = arr [ i ] [ j ]
        print ( max1 )
    
