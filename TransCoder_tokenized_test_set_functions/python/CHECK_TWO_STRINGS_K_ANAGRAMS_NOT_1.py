def areKAnagrams ( str1, str2, k ) :
    n = len ( str1 );
    
    if ( len ( str2 ) != n ) :
        return False;
        
    hash_str1 = [ 0 ] * ( MAX_CHAR );
    
    for i in range ( n ) :
        hash_str1 [ ord ( str1 [ i ] ) - ord ( 'a' ) ] += 1;
        
    count = 0;
    
    for i in range ( n ) :
        if ( hash_str1 [ ord ( str2 [ i ] ) - ord ( 'a' ) ] > 0 ) :
            hash_str1 [ ord ( str2 [ i ] ) - ord ( 'a' ) ] -= 1;
            
        else :
            count += 1;
            
        if ( count > k ) :
            return False;
            
    return True;
