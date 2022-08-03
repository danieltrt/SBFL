def countFriendsPairings ( n ) :
    dp = [ - 1 ] * 100
    if ( dp [ n ] != - 1 ) :
        return dp [ n ]
    if ( n > 2 ) :
        dp [ n ] = ( countFriendsPairings ( n - 1 ) + ( n - 1 ) * countFriendsPairings ( n - 2 ) )
        return dp [ n ]
    else :
        dp [ n ] = n
        return dp [ n ]
    
