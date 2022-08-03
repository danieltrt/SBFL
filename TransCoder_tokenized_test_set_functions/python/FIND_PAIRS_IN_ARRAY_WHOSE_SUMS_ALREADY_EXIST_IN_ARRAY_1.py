def findPair ( arr, n ) :
    s = {
    i : 1 for i in arr }
    
    found = False
    for i in range ( n ) :
        for j in range ( i + 1, n ) :
            if arr [ i ] + arr [ j ] in s . keys ( ) :
                print ( arr [ i ], arr [ j ] )
                found = True
    if found == False :
        print ( "Not exist" )
    
