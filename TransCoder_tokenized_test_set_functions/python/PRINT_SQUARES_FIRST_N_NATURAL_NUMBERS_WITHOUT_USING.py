def printSquares ( n ) :
    square = 0;
    prev_x = 0;
    
    for x in range ( 0, n ) :
        square = ( square + x + prev_x )
        print ( square, end = " " )
        prev_x = x
    
