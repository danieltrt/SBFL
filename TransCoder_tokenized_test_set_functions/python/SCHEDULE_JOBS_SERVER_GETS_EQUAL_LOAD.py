def solve ( a, b, n ) :
    s = 0
    for i in range ( 0, n ) :
        s += a [ i ] + b [ i ]
    if n == 1 :
        return a [ 0 ] + b [ 0 ]
    if s % n != 0 :
        return - 1
    x = s //n
    foriinrange(0,n):
        ifa[i]>x:
            return-1
        ifi>0:
            a[i]+=b[i-1]
            b[i-1]=0
        ifa[i]==x:
            continue
        y=a[i]+b[i]
        ifi+1<n:
            y+=b[i+1]
        ify==x:
            a[i]=y
            b[i]=0
            ifi+1<n:b[i+1]=0
            continue
        ifa[i]+b[i]==x:
            a[i]+=b[i]
            b[i]=0
            continue
        ifi+1<nanda[i]+b[i+1]==x:
            a[i]+=b[i+1]
            b[i+1]=0
            continue
        return-1
    foriinrange(0,n):
        ifb[i]!=0:
            return-1
    returnx
