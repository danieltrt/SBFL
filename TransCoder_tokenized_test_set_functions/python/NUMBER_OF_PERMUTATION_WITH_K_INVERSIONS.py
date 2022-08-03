def numberOfPermWithKInversion ( N, K ) :
    if ( N == 0 ) : return 0
    if ( K == 0 ) : return 1
    if ( memo [ N ] [ K ] != 0 ) :
        return memo [ N ] [ K ]
    sum = 0
    for i in range ( K + 1 ) :
        if ( i <= N - 1 ) :
            sum += numberOfPermWithKInversion ( N - 1, K - i )
    memo [ N ] [ K ] = sum
    return sum
