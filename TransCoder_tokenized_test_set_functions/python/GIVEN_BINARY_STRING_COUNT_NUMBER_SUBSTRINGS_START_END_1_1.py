def countSubStr ( st, n ) :
    m = 0
    for i in range ( 0, n ) :
        if ( st [ i ] == '1' ) :
            m = m + 1
    return m * ( m - 1 ) //2
