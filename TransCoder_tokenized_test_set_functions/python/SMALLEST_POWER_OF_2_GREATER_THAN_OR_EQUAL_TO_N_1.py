def nextPowerOf2 ( n ) :
    p = 1
    if ( n and not ( n & ( n - 1 ) ) ) :
        return n
    while ( p < n ) :
        p <<= 1
    return p;
