def findAndPrintUncommonChars ( str1, str2 ) :
    present = [ 0 ] * MAX_CHAR
    for i in range ( 0, MAX_CHAR ) :
        present [ i ] = 0
    l1 = len ( str1 )
    l2 = len ( str2 )
    for i in range ( 0, l1 ) :
        present [ ord ( str1 [ i ] ) - ord ( 'a' ) ] = 1
    for i in range ( 0, l2 ) :
        if ( present [ ord ( str2 [ i ] ) - ord ( 'a' ) ] == 1 or present [ ord ( str2 [ i ] ) - ord ( 'a' ) ] == - 1 ) :
            present [ ord ( str2 [ i ] ) - ord ( 'a' ) ] = - 1
        else :
            present [ ord ( str2 [ i ] ) - ord ( 'a' ) ] = 2
    for i in range ( 0, MAX_CHAR ) :
        if ( present [ i ] == 1 or present [ i ] == 2 ) :
            print ( chr ( i + ord ( 'a' ) ), end = " " )
    
