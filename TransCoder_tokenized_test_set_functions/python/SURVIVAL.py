def survival ( S, N, M ) :
    if ( ( ( N * 6 ) < ( M * 7 ) and S > 6 ) or M > N ) :
        print ( "No" )
    else :
        days = ( M * S ) / N
        if ( ( ( M * S ) % N ) != 0 ) :
            days += 1
        print ( "Yes " ),
        print ( days )
    
