def recursiveReverse ( str, i = 0 ) :
    n = len ( str )
    if i == n //2:
        return
    str[i],str[n-i-1]=str[n-i-1],str[i]
    recursiveReverse(str,i+1)
