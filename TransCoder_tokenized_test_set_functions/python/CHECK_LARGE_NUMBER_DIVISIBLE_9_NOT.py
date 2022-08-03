def check ( st ) :
    n = len ( st )
    digitSum = 0
    for i in range ( 0, n ) :
        digitSum = digitSum + ( int ) ( st [ i ] )
    return ( digitSum % 9 == 0 )
