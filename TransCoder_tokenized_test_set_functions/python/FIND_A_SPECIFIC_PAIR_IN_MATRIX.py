def findMaxValue ( mat ) :
    maxValue = 0
    for a in range ( N - 1 ) :
        for b in range ( N - 1 ) :
            for d in range ( a + 1, N ) :
                for e in range ( b + 1, N ) :
                    if maxValue < int ( mat [ d ] [ e ] - mat [ a ] [ b ] ) :
                        maxValue = int ( mat [ d ] [ e ] - mat [ a ] [ b ] );
                        
    return maxValue;
