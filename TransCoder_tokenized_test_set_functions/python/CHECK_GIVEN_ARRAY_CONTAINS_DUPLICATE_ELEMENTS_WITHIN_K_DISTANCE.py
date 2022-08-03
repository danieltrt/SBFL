def checkDuplicatesWithinK ( arr, n, k ) :
    myset = [ ]
    for i in range ( n ) :
        if arr [ i ] in myset :
            return True
        myset . append ( arr [ i ] )
        if ( i >= k ) :
            myset . remove ( arr [ i - k ] )
    return False
