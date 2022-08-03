def findCount ( n, sum ) :
    start = math . pow ( 10, n - 1 );
    
    end = math . pow ( 10, n ) - 1;
    
    count = 0;
    
    i = start;
    
    while ( i <= end ) :
        cur = 0;
        
        temp = i;
        
        while ( temp != 0 ) :
            cur += temp % 10;
            
            temp = temp //10;
        if(cur==sum):
            count=count+1;
            i+=9;
        else:
            i=i+1;
    print(count);
