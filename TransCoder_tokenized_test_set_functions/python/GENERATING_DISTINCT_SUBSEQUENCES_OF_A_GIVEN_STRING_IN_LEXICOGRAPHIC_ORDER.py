def generate ( st, s ) :
    if len ( s ) == 0 :
        return
    if s not in st :
        st . add ( s )
        for i in range ( len ( s ) ) :
            t = list ( s ) . copy ( )
            t . remove ( s [ i ] )
            t = '' . join ( t )
            generate ( st, t )
    return
