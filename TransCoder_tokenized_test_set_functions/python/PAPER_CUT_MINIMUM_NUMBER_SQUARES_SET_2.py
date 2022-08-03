def minimumSquare ( m, n ) :
    vertical_min = 10000000000
    horizontal_min = 10000000000
    if m == n :
        return 1
    if dp [ m ] [ n ] != 0 :
        return dp [ m ] [ n ]
    for i in range ( 1, m //2+1):
        horizontal_min=min(minimumSquare(i,n)+minimumSquare(m-i,n),horizontal_min)
    forjinrange(1,n//2+1):
        vertical_min=min(minimumSquare(m,j)+minimumSquare(m,n-j),vertical_min)
    dp[m][n]=min(vertical_min,horizontal_min)
    returndp[m][n]
