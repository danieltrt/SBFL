def drawPattern ( N ) :
    n = N;
    
    row = 1;
    
    nst = 1;
    
    nsp1 = n - 1;
    
    nsp2 = - 1;
    
    val1 = row;
    
    val2 = 1;
    
    while ( row <= n ) :
        csp1 = 1;
        
        while ( csp1 <= nsp1 ) :
            print ( " ", end = " " );
            
            csp1 = csp1 + 1;
            
        cst1 = 1;
        
        while ( cst1 <= nst ) :
            print ( val1, end = " " );
            
            val1 = val1 - 1;
            
            cst1 = cst1 + 1;
            
        csp2 = 1;
        
        while ( csp2 <= nsp2 ) :
            print ( " ", end = " " );
            
            csp2 = csp2 + 1;
            
        if ( row != 1 and row != n ) :
            cst2 = 1;
            
            while ( cst2 <= nst ) :
                print ( val2, end = " " );
                
                val2 = val2 + 1;
                
                cst2 = cst2 + 1;
                
        print ( )
        if ( row <= n //2):
            nst=nst+1;
            nsp1=nsp1-2;
            nsp2=nsp2+2;
            val1=row+1;
            val2=1;
        else:
            nst=nst-1;
            nsp1=nsp1+2;
            nsp2=nsp2-2;
            val1=n-row;
            val2=1;
        row=row+1;
    
