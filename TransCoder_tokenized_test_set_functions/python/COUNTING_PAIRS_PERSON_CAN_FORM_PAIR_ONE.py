def numberOfWays ( x ) :
    if x == 0 or x == 1 :
        return 1
    else :
        return ( numberOfWays ( x - 1 ) + ( x - 1 ) * numberOfWays ( x - 2 ) )
    
