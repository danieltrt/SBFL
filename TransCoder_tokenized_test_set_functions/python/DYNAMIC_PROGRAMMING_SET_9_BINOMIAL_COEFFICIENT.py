def binomialCoeff ( n, k ) :
    if k == 0 or k == n :
        return 1
    return binomialCoeff ( n - 1, k - 1 ) + binomialCoeff ( n - 1, k )
