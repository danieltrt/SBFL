def nthPalindrome ( n, k ) :
    if ( k & 1 ) :
        temp = k //2
    else:
        temp=k//2-1
    palindrome=10**temp
    palindrome=palindrome+n-1
    print(palindrome,end="")
    if(k&1):
        palindrome=palindrome//10
    while(palindrome):
        print(palindrome%10,end="")
        palindrome=palindrome//10
    
