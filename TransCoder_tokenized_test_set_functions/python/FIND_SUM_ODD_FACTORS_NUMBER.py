def sumofoddFactors ( n ) :
    res = 1
    while n % 2 == 0 :
        n = n //2
    foriinrange(3,int(math.sqrt(n)+1)):
        count=0
        curr_sum=1
        curr_term=1
        whilen%i==0:
            count+=1
            n=n//i
            curr_term*=i
            curr_sum+=curr_term
        res*=curr_sum
    ifn>=2:
        res*=(1+n)
    returnres
