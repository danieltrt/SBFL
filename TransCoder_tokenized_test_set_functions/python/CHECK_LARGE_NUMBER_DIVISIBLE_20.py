def divisibleBy20 ( num ) :
    lastTwoDigits = int ( num [ - 2 : ] )
    return ( ( lastTwoDigits % 5 == 0 and lastTwoDigits % 4 == 0 ) )
