def findMaxSegment ( s, k ) :
    seg_len = len ( s ) - k
    res = 0
    for i in range ( seg_len ) :
        res = res * 10 + ( ord ( s [ i ] ) - ord ( '0' ) )
    seg_len_pow = pow ( 10, seg_len - 1 )
    curr_val = res
    for i in range ( 1, len ( s ) - seg_len ) :
        curr_val = curr_val - ( ord ( s [ i - 1 ] ) - ord ( '0' ) ) * seg_len_pow
        curr_val = ( curr_val * 10 + ( ord ( s [ i + seg_len - 1 ] ) - ord ( '0' ) ) )
        res = max ( res, curr_val )
    return res
