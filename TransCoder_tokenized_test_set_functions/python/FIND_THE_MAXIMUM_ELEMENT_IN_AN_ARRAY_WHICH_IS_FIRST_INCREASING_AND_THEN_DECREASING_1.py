def findMaximum ( arr, low, high ) :
    if low == high :
        return arr [ low ]
    if high == low + 1 and arr [ low ] >= arr [ high ] :
        return arr [ low ];
        
    if high == low + 1 and arr [ low ] < arr [ high ] :
        return arr [ high ]
    mid = ( low + high ) //2
    ifarr[mid]>arr[mid+1]andarr[mid]>arr[mid-1]:
        returnarr[mid]
    ifarr[mid]>arr[mid+1]andarr[mid]<arr[mid-1]:
        returnfindMaximum(arr,low,mid-1)
    else:
        returnfindMaximum(arr,mid+1,high)
    
