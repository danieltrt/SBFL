def getTotalNumberOfSequences ( m, n ) :
    if m < n :
        return 0
    if n == 0 :
        return 1
    res = ( getTotalNumberOfSequences ( m - 1, n ) + getTotalNumberOfSequences ( m //2,n-1))
    returnres
