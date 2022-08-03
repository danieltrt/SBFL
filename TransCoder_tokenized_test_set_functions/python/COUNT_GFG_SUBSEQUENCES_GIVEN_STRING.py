def countSubsequence ( s, n ) :
    cntG = 0
    cntF = 0
    result = 0
    C = 0
    for i in range ( n ) :
        if ( s [ i ] == 'G' ) :
            cntG += 1
            result += C
            continue
        if ( s [ i ] == 'F' ) :
            cntF += 1
            C += cntG
            continue
        else :
            continue
    print ( result )
