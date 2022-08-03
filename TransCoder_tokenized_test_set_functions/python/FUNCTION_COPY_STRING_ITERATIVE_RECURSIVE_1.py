def myCopy ( s1, s2, index ) :
    s2 [ index ] = s1 [ index ];
    
    if ( index == len ( s1 ) - 1 ) :
        return;
        
    myCopy ( s1, s2, index + 1 );
