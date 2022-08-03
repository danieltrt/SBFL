def sortString ( str, n ) :
    new_str = ""
    for i in range ( ord ( 'a' ), ord ( 'z' ) + 1 ) :
        for j in range ( n ) :
            if ( str [ j ] == chr ( i ) ) :
                new_str += str [ j ]
    return new_str
