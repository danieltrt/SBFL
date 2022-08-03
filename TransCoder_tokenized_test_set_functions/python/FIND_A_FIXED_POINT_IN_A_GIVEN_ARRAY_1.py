def binarySearch ( arr, low, high ) :
    if high >= low :
        mid = ( low + high ) //2
    ifmidisarr[mid]:
        returnmid
    ifmid>arr[mid]:
        returnbinarySearch(arr,(mid+1),high)
    else:
        returnbinarySearch(arr,low,(mid-1))
    return-1
