def printNumbers ( numbers ) :
    numbers = map ( str, numbers )
    result = [ ]
    for num in numbers :
        if ( '1' in num and '2' in num and '3' in num ) :
            result . append ( num )
    if not result :
        result = [ '-1' ]
    return sorted ( result );
