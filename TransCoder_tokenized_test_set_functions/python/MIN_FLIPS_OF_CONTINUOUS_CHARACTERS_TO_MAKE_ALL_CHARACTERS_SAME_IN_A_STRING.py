def findFlips ( str, n ) :
    last = ' '
    res = 0
    for i in range ( n ) :
        if ( last != str [ i ] ) :
            res += 1
        last = str [ i ]
    return res //2
