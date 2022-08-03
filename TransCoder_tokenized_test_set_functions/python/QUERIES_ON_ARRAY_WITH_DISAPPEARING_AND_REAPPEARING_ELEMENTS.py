def PerformQueries ( a, vec ) :
    ans = [ ];
    
    n = len ( a ) - 1;
    
    q = len ( vec );
    
    for i in range ( q ) :
        t = vec [ i ] [ 0 ];
        
        m = vec [ i ] [ 1 ];
        
        if ( m > n ) :
            ans . append ( - 1 );
            
            continue;
            
        turn = t //n;
        rem=t%n;
        if(rem==0andturn%2==1):
            ans.append(-1);
            continue;
        if(rem==0andturn%2==0):
            ans.append(a[m]);
            continue;
        if(turn%2==0):
            cursize=n-rem;
            if(cursize<m):
                ans.append(-1);
                continue;
            ans.append(a[m+rem]);
        else:
            cursize=rem;
            if(cursize<m):
                ans.append(-1);
                continue;
            ans.append(a[m]);
    foriinans:
        print(i);
    
