def solve ( i, par, a, n, k, current_ans ) :
    if ( par > k ) :
        return 0
    global ans
    if ( par == k and i == n - 1 ) :
        ans = min ( ans, current_ans )
        return 0
    for j in range ( i + 1, n ) :
        solve ( j, par + 1, a, n, k, current_ans + ( a [ j ] - a [ i + 1 ] ) * ( a [ j ] - a [ i + 1 ] ) )
    
