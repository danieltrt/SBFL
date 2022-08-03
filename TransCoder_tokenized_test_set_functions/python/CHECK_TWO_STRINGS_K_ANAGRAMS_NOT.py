def arekAnagrams ( str1, str2, k ) :
    n = len ( str1 )
    if ( len ( str2 ) != n ) :
        return False
    count1 = [ 0 ] * MAX_CHAR
    count2 = [ 0 ] * MAX_CHAR
    for i in range ( n ) :
        count1 [ ord ( str1 [ i ] ) - ord ( 'a' ) ] += 1
    for i in range ( n ) :
        count2 [ ord ( str2 [ i ] ) - ord ( 'a' ) ] += 1
    count = 0
    for i in range ( MAX_CHAR ) :
        if ( count1 [ i ] > count2 [ i ] ) :
            count = count + abs ( count1 [ i ] - count2 [ i ] )
    return ( count <= k )
