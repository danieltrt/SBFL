def findMinNumber ( n ) :
    count = 0
    ans = 1
    while n % 2 == 0 :
        count += 1
        n //=2
    ifcount%2isnot0:
        ans*=2
    foriinrange(3,(int)(math.sqrt(n))+1,2):
        count=0
        whilen%i==0:
            count+=1
            n//=i
        ifcount%2isnot0:
            ans*=i
    ifn>2:
        ans*=n
    returnans
