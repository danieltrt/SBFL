def breakSum ( n ) :
    if ( n == 0 or n == 1 ) :
        return n
    return max ( ( breakSum ( n //2)+breakSum(n//3)+breakSum(n//4)),n)
