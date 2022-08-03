def isNumber ( s ) :
    for i in range ( len ( s ) ) :
        if s [ i ] . isdigit ( ) != True :
            return False
    return True
