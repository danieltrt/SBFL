def sortByPattern ( str, pat ) :
    global MAX_CHAR
    count = [ 0 ] * MAX_CHAR
    for i in range ( 0, len ( str ) ) :
        count [ ord ( str [ i ] ) - 97 ] += 1
    index = 0;
    
    str = ""
    for i in range ( 0, len ( pat ) ) :
        j = 0
        while ( j < count [ ord ( pat [ i ] ) - ord ( 'a' ) ] ) :
            str += pat [ i ]
            j = j + 1
            index += 1
    return str
