def getMinSteps ( n ) :
    table = [ 0 ] * ( n + 1 )
    for i in range ( n + 1 ) :
        table [ i ] = n - i
    for i in range ( n, 0, - 1 ) :
        if ( not ( i % 2 ) ) :
            table [ i //2]=min(table[i]+1,table[i//2])
        if(not(i%3)):
            table[i//3]=min(table[i]+1,table[i//3])
    returntable[1]
    
    
    
    COUNT_POSSIBLE_DECODINGS_GIVEN_DIGIT_SEQUENCE_1 | def countDecodingDP ( digits, n ) :
        count = [ 0 ] * ( n + 1 );
        
        count [ 0 ] = 1;
        
        count [ 1 ] = 1;
        
        for i in range ( 2, n + 1 ) :
            count [ i ] = 0;
            
            if ( digits [ i - 1 ] > '0' ) :
                count [ i ] = count [ i - 1 ];
                
            if ( digits [ i - 2 ] == '1' or ( digits [ i - 2 ] == '2' and digits [ i - 1 ] < '7' ) ) :
                count [ i ] += count [ i - 2 ];
                
        return count [ n ];
