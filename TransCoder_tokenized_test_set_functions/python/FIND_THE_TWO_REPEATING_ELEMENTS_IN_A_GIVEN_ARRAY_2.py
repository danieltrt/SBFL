def printRepeating ( arr, size ) :
    xor = arr [ 0 ]
    n = size - 2
    x = 0
    y = 0
    for i in range ( 1, size ) :
        xor ^= arr [ i ]
    for i in range ( 1, n + 1 ) :
        xor ^= i
    set_bit_no = xor & ~ ( xor - 1 )
    for i in range ( 0, size ) :
        if ( arr [ i ] & set_bit_no ) :
            x = x ^ arr [ i ]
        else :
            y = y ^ arr [ i ]
    for i in range ( 1, n + 1 ) :
        if ( i & set_bit_no ) :
            x = x ^ i
        else :
            y = y ^ i
    print ( "The two repeating", "elements are", y, x )
