def checkEulerFourSquareIdentity ( a, b ) :
    ab = a * b
    flag = False
    i = 0
    while i * i <= ab :
        j = i
        while i * i + j * j <= ab :
            k = j
            while i * i + j * j + k * k <= ab :
                l = ( ab - ( i * i + j * j + k * k ) ) * * ( 0.5 )
                if l == int ( l ) and l >= k :
                    flag = True
                    print ( "i = ", i )
                    print ( "j = ", j )
                    print ( "k = ", k )
                    print ( "l = ", l )
                    print ( "Product of", a, "and", b, "can be written as sum of squares of i, j, k, l" )
                    print ( ab, " = ", i, "*", i, "+", j, "*", j, "+", k, "*", k, "+", l, "*", l )
                k += 1
            j += 1
        i += 1
    if flag == False :
        print ( "Solution doesn't exist!" )
        return
    
