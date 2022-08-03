def isMajority ( a ) :
    mp = {
    }
    
    for i in a :
        if i in mp : mp [ i ] += 1
        else : mp [ i ] = 1
    for x in mp :
        if mp [ x ] >= len ( a ) //2:
            returnTrue
    returnFalse
