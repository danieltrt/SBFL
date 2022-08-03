def LexicographicalMaxString ( str ) :
    mx = ""
    for i in range ( len ( str ) ) :
        mx = max ( mx, str [ i : ] )
    return mx
