def findLeft ( str ) :
    n = len ( str ) - 1;
    
    while ( n > 0 ) :
        if ( str [ n ] == 'd' ) :
            str = str [ 0 : n ] + 'c' + str [ n + 1 : ];
            
            break;
            
        if ( str [ n ] == 'b' ) :
            str = str [ 0 : n ] + 'a' + str [ n + 1 : ];
            
            break;
            
        if ( str [ n ] == 'a' ) :
            str = str [ 0 : n ] + 'b' + str [ n + 1 : ];
            
        elif ( str [ n ] == 'c' ) :
            str = str [ 0 : n ] + 'd' + str [ n + 1 : ];
            
        n -= 1;
        
    return str;
