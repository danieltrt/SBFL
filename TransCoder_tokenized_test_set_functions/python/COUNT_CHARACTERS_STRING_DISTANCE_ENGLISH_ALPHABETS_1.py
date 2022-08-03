def countPairs ( str1 ) :
    result = 0;
    
    n = len ( str1 )
    for i in range ( 0, n ) :
        for j in range ( 1, MAX_CHAR + 1 ) :
            if ( ( i + j ) < n ) :
                if ( ( abs ( ord ( str1 [ i + j ] ) - ord ( str1 [ i ] ) ) == j ) ) :
                    result += 1;
                    
    return result
