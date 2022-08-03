def fix ( A, len ) :
    for i in range ( 0, len ) :
        if ( A [ i ] != - 1 and A [ i ] != i ) :
            x = A [ i ];
            
            while ( A [ x ] != - 1 and A [ x ] != x ) :
                y = A [ x ]
                A [ x ] = x
                x = y
            A [ x ] = x;
            
            if ( A [ i ] != i ) :
                A [ i ] = - 1;
                
    
