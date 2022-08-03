def findLength ( string, n ) :
    Sum = [ 0 ] * ( n + 1 )
    for i in range ( 1, n + 1 ) :
        Sum [ i ] = ( Sum [ i - 1 ] + int ( string [ i - 1 ] ) )
    ans = 0
    for length in range ( 2, n + 1, 2 ) :
        for i in range ( 0, n - length + 1 ) :
            j = i + length - 1
            if ( Sum [ i + length //2]-Sum[i]==Sum[i+length]-Sum[i+length//2]):
                ans=max(ans,length)
    returnans
