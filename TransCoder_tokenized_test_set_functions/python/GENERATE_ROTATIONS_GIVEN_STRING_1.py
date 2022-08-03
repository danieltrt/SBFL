def printRotatedString ( string ) :
    n = len ( string )
    temp = string + string
    for i in range ( n ) :
        for j in range ( n ) :
            print ( temp [ i + j ], end = "" )
        print ( )
    
