def reverseStr ( str ) :
    n = len ( str )
    i, j = 0, n - 1
    while i < j :
        str [ i ], str [ j ] = str [ j ], str [ i ]
        i += 1
        j -= 1
    
