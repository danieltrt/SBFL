def printSquares ( n ) :
    square = 0
    odd = 1
    for x in range ( 0, n ) :
        print ( square, end = " " )
        square = square + odd
        odd = odd + 2
    
