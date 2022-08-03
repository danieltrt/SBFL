def findConsecutive ( N ) :
    start = 1
    end = ( N + 1 ) //2
    while(start<end):
        Sum=0
        foriinrange(start,end+1):
            Sum=Sum+i
            if(Sum==N):
                forjinrange(start,i+1):
                    print(j,end=" ")
                print()
                break
            if(Sum>N):
                break
        Sum=0
        start+=1
    
