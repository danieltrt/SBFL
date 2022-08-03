def numoffbt ( arr, n ) :
    maxvalue = - 2147483647
    minvalue = 2147483647
    for i in range ( n ) :
        maxvalue = max ( maxvalue, arr [ i ] )
        minvalue = min ( minvalue, arr [ i ] )
    mark = [ 0 for i in range ( maxvalue + 2 ) ]
    value = [ 0 for i in range ( maxvalue + 2 ) ]
    for i in range ( n ) :
        mark [ arr [ i ] ] = 1
        value [ arr [ i ] ] = 1
    ans = 0
    for i in range ( minvalue, maxvalue + 1 ) :
        if ( mark [ i ] != 0 ) :
            j = i + i
            while ( j <= maxvalue and j //i<=i):
                if(mark[j]==0):
                    continue
                value[j]=value[j]+(value[i]*value[j//i])
                if(i!=j//i):
                    value[j]=value[j]+(value[i]*value[j//i])
                j+=i
        ans+=value[i]
    returnans
