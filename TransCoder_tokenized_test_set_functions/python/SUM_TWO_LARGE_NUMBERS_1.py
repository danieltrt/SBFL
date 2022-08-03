def findSum ( str1, str2 ) :
    if len ( str1 ) > len ( str2 ) :
        temp = str1
        str1 = str2
        str2 = temp
    str3 = ""
    n1 = len ( str1 )
    n2 = len ( str2 )
    diff = n2 - n1
    carry = 0
    for i in range ( n1 - 1, - 1, - 1 ) :
        sum = ( ( ord ( str1 [ i ] ) - ord ( '0' ) ) + int ( ( ord ( str2 [ i + diff ] ) - ord ( '0' ) ) ) + carry )
        str3 = str3 + str ( sum % 10 )
        carry = sum //10
    foriinrange(n2-n1-1,-1,-1):
        sum=((ord(str2[i])-ord('0'))+carry)
        str3=str3+str(sum%10)
        carry=sum//10
    if(carry):
        str3+str(carry+'0')
    str3=str3[::-1]
    returnstr3
