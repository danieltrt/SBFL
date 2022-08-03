def isPossible ( n, index, Sum, M, arr, dp ) :
    global MAX
    if index == n :
        if ( Sum % M ) == 0 :
            return True
        return False
    if dp [ index ] [ Sum ] != - 1 :
        return dp [ index ] [ Sum ]
    placeAdd = isPossible ( n, index + 1, Sum + arr [ index ], M, arr, dp )
    placeMinus = isPossible ( n, index + 1, Sum - arr [ index ], M, arr, dp )
    res = placeAdd or placeMinus
    dp [ index ] [ Sum ] = res
    return res
