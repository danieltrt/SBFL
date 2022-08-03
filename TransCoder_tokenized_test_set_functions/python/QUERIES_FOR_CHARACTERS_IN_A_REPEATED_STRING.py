def query ( s, i, j ) :
    n = len ( s )
    i %= n
    j %= n
    print ( "Yes" ) if s [ i ] == s [ j ] else print ( "No" )
