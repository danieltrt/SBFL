def checkCorrectOrNot ( s ) :
    global MAX_CHAR
    count1 = [ 0 ] * MAX_CHAR
    count2 = [ 0 ] * MAX_CHAR
    n = len ( s )
    if n == 1 :
        return true
    i = 0;
    j = n - 1
    while ( i < j ) :
        count1 [ ord ( s [ i ] ) - ord ( 'a' ) ] += 1
        count2 [ ord ( s [ j ] ) - ord ( 'a' ) ] += 1
        i += 1;
        j -= 1
    for i in range ( MAX_CHAR ) :
        if count1 [ i ] != count2 [ i ] :
            return False
    return True
