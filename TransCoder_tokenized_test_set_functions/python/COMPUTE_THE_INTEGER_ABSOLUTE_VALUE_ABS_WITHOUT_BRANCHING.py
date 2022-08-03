def getAbs ( n ) :
    mask = n >> ( SIZE_INT * CHARBIT - 1 );
    
    return ( ( n + mask ) ^ mask );
