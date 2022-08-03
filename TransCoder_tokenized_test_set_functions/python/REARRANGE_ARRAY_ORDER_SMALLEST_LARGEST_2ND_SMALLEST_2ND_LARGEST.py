def rearrangeArray ( arr, n ) :
    arr . sort ( )
    tempArr = [ 0 ] * ( n + 1 )
    ArrIndex = 0
    i = 0
    j = n - 1
    while ( i <= n //2orj>n//2):
        tempArr[ArrIndex]=arr[i]
        ArrIndex=ArrIndex+1
        tempArr[ArrIndex]=arr[j]
        ArrIndex=ArrIndex+1
        i=i+1
        j=j-1
    foriinrange(0,n):
        arr[i]=tempArr[i]
    
