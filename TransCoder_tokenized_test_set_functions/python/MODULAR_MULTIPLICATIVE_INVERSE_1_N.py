def modularInverse ( n, prime ) :
    dp = [ 0 ] * ( n + 1 )
    dp [ 0 ] = dp [ 1 ] = 1
    for i in range ( 2, n + 1 ) :
        dp [ i ] = dp [ prime % i ] * ( prime - prime //i)%prime
    foriinrange(1,n+1):
        print(dp[i],end=" ")
    
