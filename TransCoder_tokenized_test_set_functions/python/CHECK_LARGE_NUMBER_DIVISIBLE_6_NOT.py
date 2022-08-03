def check ( st ) :
    n = len ( st )
    if ( ( ( int ) ( st [ n - 1 ] ) % 2 ) != 0 ) :
        return False
    digitSum = 0
    for i in range ( 0, n ) :
        digitSum = digitSum + ( int ) ( st [ i ] )
    return ( digitSum % 3 == 0 )
