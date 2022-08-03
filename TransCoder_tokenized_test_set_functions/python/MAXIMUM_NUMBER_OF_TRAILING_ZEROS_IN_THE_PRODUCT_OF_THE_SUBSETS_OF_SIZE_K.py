def maximumZeros ( arr, n, k ) :
    global MAX5
    subset = [ [ - 1 ] * ( MAX5 + 5 ) for _ in range ( k + 1 ) ]
    subset [ 0 ] [ 0 ] = 0
    for p in arr :
        pw2, pw5 = 0, 0
        while not p % 2 :
            pw2 += 1
            p //=2
        whilenotp%5:
            pw5+=1
            p//=5
        foriinrange(k-1,-1,-1):
            forjinrange(MAX5):
                ifsubset[i][j]!=-1:
                    subset[i+1][j+pw5]=(max(subset[i+1][j+pw5],(subset[i][j]+pw2)))
    ans=0
    foriinrange(MAX5):
        ans=max(ans,min(i,subset[k][i]))
    returnans
