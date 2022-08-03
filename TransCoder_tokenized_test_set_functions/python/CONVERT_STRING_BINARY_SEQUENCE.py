def strToBinary ( s ) :
    bin_conv = [ ]
    for c in s :
        ascii_val = ord ( c )
        binary_val = bin ( ascii_val )
        bin_conv . append ( binary_val [ 2 : ] )
    return ( ' ' . join ( bin_conv ) )
