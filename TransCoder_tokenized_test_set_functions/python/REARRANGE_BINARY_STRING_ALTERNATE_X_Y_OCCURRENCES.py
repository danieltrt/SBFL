def arrangeString ( str1, x, y ) :
    count_0 = 0
    count_1 = 0
    n = len ( str1 )
    for i in range ( n ) :
        if str1 [ i ] == '0' :
            count_0 += 1
        else :
            count_1 += 1
    while count_0 > 0 or count_1 > 0 :
        for i in range ( 0, x ) :
            if count_0 > 0 :
                print ( "0", end = "" )
                count_0 -= 1
        for j in range ( 0, y ) :
            if count_1 > 0 :
                print ( "1", end = "" )
                count_1 -= 1
    
