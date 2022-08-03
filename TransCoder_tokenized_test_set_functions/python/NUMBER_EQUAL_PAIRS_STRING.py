def countPairs ( s ) :
    cnt = [ 0 for i in range ( 0, MAX ) ]
    for i in range ( len ( s ) ) :
        cnt [ ord ( s [ i ] ) - 97 ] += 1
    ans = 0
    for i in range ( 0, MAX ) :
        ans += cnt [ i ] * cnt [ i ]
    return ans
