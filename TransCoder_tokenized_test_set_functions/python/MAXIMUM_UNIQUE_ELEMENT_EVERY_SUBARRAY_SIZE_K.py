def find_max ( A, N, K ) :
    Count = dict ( )
    for i in range ( K - 1 ) :
        Count [ A [ i ] ] = Count . get ( A [ i ], 0 ) + 1
    Myset = dict ( )
    for x in Count :
        if ( Count [ x ] == 1 ) :
            Myset [ x ] = 1
    for i in range ( K - 1, N ) :
        Count [ A [ i ] ] = Count . get ( A [ i ], 0 ) + 1
        if ( Count [ A [ i ] ] == 1 ) :
            Myset [ A [ i ] ] = 1
        else :
            del Myset [ A [ i ] ]
        if ( len ( Myset ) == 0 ) :
            print ( "Nothing" )
        else :
            maxm = - 10 * * 9
            for i in Myset :
                maxm = max ( i, maxm )
            print ( maxm )
        x = A [ i - K + 1 ]
        if x in Count . keys ( ) :
            Count [ x ] -= 1
            if ( Count [ x ] == 1 ) :
                Myset [ x ] = 1
            if ( Count [ x ] == 0 ) :
                del Myset [ x ]
    
