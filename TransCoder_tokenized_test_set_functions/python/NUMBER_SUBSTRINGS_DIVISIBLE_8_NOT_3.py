def count ( s, Len ) :
    global MAX
    cur = 0
    dig = 0
    Sum = [ 0 ] * MAX
    dp = [ [ 0, 0, 0 ] for i in range ( MAX ) ]
    dp [ 0 ] [ 0 ] = 1
    for i in range ( 1, Len + 1 ) :
        dig = int ( s [ i - 1 ] ) - 48
        cur += dig
        cur %= 3
        Sum [ i ] = cur
        dp [ i ] [ 0 ] = dp [ i - 1 ] [ 0 ]
        dp [ i ] [ 1 ] = dp [ i - 1 ] [ 1 ]
        dp [ i ] [ 2 ] = dp [ i - 1 ] [ 2 ]
        dp [ i ] [ Sum [ i ] ] += 1
    ans = 0
    dprev = 0
    value = 0
    dprev2 = 0
    for i in range ( 1, Len + 1 ) :
        dig = int ( s [ i - 1 ] ) - 48
        if dig == 8 :
            ans += 1
        if i - 2 >= 0 :
            dprev = int ( s [ i - 2 ] ) - 48
            value = dprev * 10 + dig
            if ( value % 8 == 0 ) and ( value % 3 != 0 ) :
                ans += 1
        if i - 3 >= 0 :
            dprev2 = int ( s [ i - 3 ] ) - 48
            dprev = int ( s [ i - 2 ] ) - 48
            value = ( dprev2 * 100 + dprev * 10 + dig )
            if value % 8 != 0 :
                continue
            ans += ( i - 2 )
            ans -= ( dp [ i - 3 ] [ Sum [ i ] ] )
    return ans
