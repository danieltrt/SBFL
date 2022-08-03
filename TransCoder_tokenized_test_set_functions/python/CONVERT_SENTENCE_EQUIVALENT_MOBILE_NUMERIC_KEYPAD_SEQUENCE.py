def printSequence ( arr, input ) :
    n = len ( input )
    output = ""
    for i in range ( n ) :
        if ( input [ i ] == ' ' ) :
            output = output + "0"
        else :
            position = ord ( input [ i ] ) - ord ( 'A' )
            output = output + arr [ position ]
    return output
