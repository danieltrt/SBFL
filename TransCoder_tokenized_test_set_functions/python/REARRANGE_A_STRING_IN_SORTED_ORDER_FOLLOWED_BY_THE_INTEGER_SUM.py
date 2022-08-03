def arrangeString ( string ) :
    char_count = [ 0 ] * MAX_CHAR
    s = 0
    for i in range ( len ( string ) ) :
        if string [ i ] >= "A" and string [ i ] <= "Z" :
            char_count [ ord ( string [ i ] ) - ord ( "A" ) ] += 1
        else :
            s += ord ( string [ i ] ) - ord ( "0" )
    res = ""
    for i in range ( MAX_CHAR ) :
        ch = chr ( ord ( "A" ) + i )
        while char_count [ i ] :
            res += ch
            char_count [ i ] -= 1
    if s > 0 :
        res += str ( s )
    return res
