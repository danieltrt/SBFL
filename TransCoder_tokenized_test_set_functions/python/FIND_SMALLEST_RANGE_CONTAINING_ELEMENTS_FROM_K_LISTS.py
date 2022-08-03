def findSmallestRange ( arr, n, k ) :
    i, minval, maxval, minrange, minel, maxel, flag, minind = 0, 0, 0, 0, 0, 0, 0, 0
    for i in range ( k + 1 ) :
        ptr [ i ] = 0
    minrange = 10 * * 9
    while ( 1 ) :
        minind = - 1
        minval = 10 * * 9
        maxval = - 10 * * 9
        flag = 0
        for i in range ( k ) :
            if ( ptr [ i ] == n ) :
                flag = 1
                break
            if ( ptr [ i ] < n and arr [ i ] [ ptr [ i ] ] < minval ) :
                minind = i
                minval = arr [ i ] [ ptr [ i ] ]
            if ( ptr [ i ] < n and arr [ i ] [ ptr [ i ] ] > maxval ) :
                maxval = arr [ i ] [ ptr [ i ] ]
        if ( flag ) :
            break
        ptr [ minind ] += 1
        if ( ( maxval - minval ) < minrange ) :
            minel = minval
            maxel = maxval
            minrange = maxel - minel
    print ( "The smallest range is [", minel, maxel, "]" )
