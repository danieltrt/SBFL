def find ( list1, list2 ) :
    res = [ ]
    max_possible_sum = len ( list1 ) + len ( list2 ) - 2
    for sum in range ( max_possible_sum + 1 ) :
        for i in range ( sum + 1 ) :
            if ( i < len ( list1 ) and ( sum - i ) < len ( list2 ) and list1 [ i ] == list2 [ sum - i ] ) :
                res . append ( list1 [ i ] )
        if ( len ( res ) > 0 ) :
            break
    for i in range ( len ( res ) ) :
        print ( res [ i ], end = " " )
    
