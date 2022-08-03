def findMaxVal ( arr, n, num, maxLimit ) :
    ind = - 1;
    
    val = - 1;
    
    dp = [ [ 0 for i in range ( maxLimit + 1 ) ] for j in range ( n ) ];
    
    for ind in range ( n ) :
        for val in range ( maxLimit + 1 ) :
            if ( ind == 0 ) :
                if ( num - arr [ ind ] == val or num + arr [ ind ] == val ) :
                    dp [ ind ] [ val ] = 1;
                    
                else :
                    dp [ ind ] [ val ] = 0;
                    
            else :
                if ( val - arr [ ind ] >= 0 and val + arr [ ind ] <= maxLimit ) :
                    if ( dp [ ind - 1 ] [ val - arr [ ind ] ] == 1 or dp [ ind - 1 ] [ val + arr [ ind ] ] == 1 ) :
                        dp [ ind ] [ val ] = 1;
                        
                elif ( val - arr [ ind ] >= 0 ) :
                    dp [ ind ] [ val ] = dp [ ind - 1 ] [ val - arr [ ind ] ];
                    
                elif ( val + arr [ ind ] <= maxLimit ) :
                    dp [ ind ] [ val ] = dp [ ind - 1 ] [ val + arr [ ind ] ];
                    
                else :
                    dp [ ind ] [ val ] = 0;
                    
    for val in range ( maxLimit, - 1, - 1 ) :
        if ( dp [ n - 1 ] [ val ] == 1 ) :
            return val;
            
    return - 1;
