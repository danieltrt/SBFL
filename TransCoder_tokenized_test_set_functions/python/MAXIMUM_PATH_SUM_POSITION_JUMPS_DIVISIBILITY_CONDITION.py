def printMaxSum ( arr, n ) :
    dp = [ 0 for i in range ( n ) ]
    for i in range ( n ) :
        dp [ i ] = arr [ i ]
        maxi = 0
        for j in range ( 1, int ( ( i + 1 ) * * 0.5 ) + 1 ) :
            if ( ( i + 1 ) % j == 0 and ( i + 1 ) != j ) :
                if ( dp [ j - 1 ] > maxi ) :
                    maxi = dp [ j - 1 ]
                if ( dp [ ( i + 1 ) //j-1]>maxiandj!=1):
                    maxi=dp[(i+1)//j-1]
        dp[i]+=maxi
    foriinrange(n):
        print(dp[i],end=' ')
    
