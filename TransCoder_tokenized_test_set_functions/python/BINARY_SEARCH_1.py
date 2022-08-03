def binarySearch ( arr, l, r, x ) :
    while l <= r :
        mid = l + ( r - l ) //2;
        ifarr[mid]==x:
            returnmid
        elifarr[mid]<x:
            l=mid+1
        else:
            r=mid-1
    return-1
