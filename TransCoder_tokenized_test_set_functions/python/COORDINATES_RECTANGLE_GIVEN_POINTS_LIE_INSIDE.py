def printRect ( X, Y, n ) :
    Xmax = max ( X )
    Xmin = min ( X )
    Ymax = max ( Y )
    Ymin = min ( Y )
    print ( "{", Xmin, ", ", Ymin, "}", sep = "" )
    print ( "{", Xmin, ", ", Ymax, "}", sep = "" )
    print ( "{", Xmax, ", ", Ymax, "}", sep = "" )
    print ( "{", Xmax, ", ", Ymin, "}", sep = "" )
