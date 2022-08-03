def substringConversions ( str1, k, b ) :
    for i in range ( 0, len ( str1 ) - k + 1 ) :
        sub = str1 [ i : k + i ]
        Sum = 0
        counter = 0
        for i in range ( len ( sub ) - 1, - 1, - 1 ) :
            Sum = ( Sum + ( ( ord ( sub [ i ] ) - ord ( '0' ) ) * pow ( b, counter ) ) )
            counter += 1
        print ( Sum, end = " " )
    
