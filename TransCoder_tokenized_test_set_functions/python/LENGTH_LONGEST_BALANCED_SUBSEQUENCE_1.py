def maxLength ( s, n ) :
    invalidOpenBraces = 0;
    
    invalidCloseBraces = 0;
    
    for i in range ( n ) :
        if ( s [ i ] == '(' ) :
            invalidOpenBraces += 1
        else :
            if ( invalidOpenBraces == 0 ) :
                invalidCloseBraces += 1
            else :
                invalidOpenBraces -= 1
    return ( n - ( invalidOpenBraces + invalidCloseBraces ) )
