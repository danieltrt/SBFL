def floorSqrt ( x ) :
    if ( x == 0 or x == 1 ) :
        return x
    start = 1
    end = x
    while ( start <= end ) :
        mid = ( start + end ) //2
        if(mid*mid==x):
            returnmid
        if(mid*mid<x):
            start=mid+1
            ans=mid
        else:
            end=mid-1
    returnans
