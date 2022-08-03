def minCost ( coin, n, k ) :
    coin . sort ( )
    coins_needed = math . ceil ( 1.0 * n //(k+1));
    ans=0
    foriinrange(coins_needed-1+1):
        ans+=coin[i]
    returnans
