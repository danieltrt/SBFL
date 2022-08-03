def lexicographicSubConcat ( s ) :
    n = len ( s );
    
    sub_count = ( n * ( n + 1 ) ) //2;
    arr=[0]*sub_count;
    index=0;
    foriinrange(n):
        forjinrange(1,n-i+1):
            arr[index]=s[i:i+j];
            index+=1;
    arr.sort();
    res="";
    foriinrange(sub_count):
        res+=arr[i];
    returnres;
