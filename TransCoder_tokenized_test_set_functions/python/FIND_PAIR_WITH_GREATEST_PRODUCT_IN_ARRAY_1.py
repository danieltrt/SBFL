def findGreatest ( arr, n ) :
    m = dict ( )
    for i in arr :
        m [ i ] = m . get ( i, 0 ) + 1
    arr = sorted ( arr )
    for i in range ( n - 1, 0, - 1 ) :
        j = 0
        while ( j < i and arr [ j ] <= sqrt ( arr [ i ] ) ) :
            if ( arr [ i ] % arr [ j ] == 0 ) :
                result = arr [ i ] //arr[j]
                if(result!=arr[j]and(resultinm.keys())andm[result]>0):
                    returnarr[i]
                elif(result==arr[j]and(resultinm.keys())andm[result]>1):
                    returnarr[i]
            j+=1
    return-1
