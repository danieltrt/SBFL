def binarySearch ( arr, l, r, x ) :
    if r >= l :
        mid = l + ( r - l ) //2
        ifarr[mid]==x:
            returnmid
        elifarr[mid]>x:
            returnbinarySearch(arr,l,mid-1,x)
        else:
            returnbinarySearch(arr,mid+1,r,x)
    else:
        return-1
    
