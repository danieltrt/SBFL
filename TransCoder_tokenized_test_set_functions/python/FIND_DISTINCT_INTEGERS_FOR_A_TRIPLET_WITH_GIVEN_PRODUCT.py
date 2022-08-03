def findTriplets ( x ) :
    fact = [ ];
    
    factors = set ( );
    
    for i in range ( 2, int ( sqrt ( x ) ) ) :
        if ( x % i == 0 ) :
            fact . append ( i );
            
            if ( x / i != i ) :
                fact . append ( x //i);
            factors.add(i);
            factors.add(x//i);
    found=False;
    k=len(fact);
    foriinrange(k):
        a=fact[i];
        forjinrange(k):
            b=fact[j];
            if((a!=b)and(x%(a*b)==0)and(x/(a*b)!=a)and(x/(a*b)!=b)and(x/(a*b)!=1)):
                print(a,b,x//(a*b));
                found=True;
                break;
        if(found):
            break;
    if(notfound):
        print("-1");
    
