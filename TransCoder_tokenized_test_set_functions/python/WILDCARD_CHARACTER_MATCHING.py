def match ( first, second ) :
    if len ( first ) == 0 and len ( second ) == 0 :
        return True
    if len ( first ) > 1 and first [ 0 ] == '*' and len ( second ) == 0 :
        return False
    if ( len ( first ) > 1 and first [ 0 ] == '?' ) or ( len ( first ) != 0 and len ( second ) != 0 and first [ 0 ] == second [ 0 ] ) :
        return match ( first [ 1 : ], second [ 1 : ] );
        
    if len ( first ) != 0 and first [ 0 ] == '*' :
        return match ( first [ 1 : ], second ) or match ( first, second [ 1 : ] )
    return False
