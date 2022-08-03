def sortString ( str ) :
    charCount = [ 0 ] * MAX_CHAR;
    
    for i in range ( len ( str ) ) :
        charCount [ ord ( str [ i ] ) - ord ( 'a' ) ] += 1;
        
    for i in range ( MAX_CHAR - 1, - 1, - 1 ) :
        for j in range ( charCount [ i ] ) :
            print ( chr ( 97 + i ), end = "" );
            
    
