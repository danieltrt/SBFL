def subset ( arr, n ) :
    mp = {
    i : 0 for i in range ( 10 ) }
    
    for i in range ( n ) :
        mp [ arr [ i ] ] += 1
    res = 0
    for key, value in mp . items ( ) :
        res = max ( res, value )
    return res
