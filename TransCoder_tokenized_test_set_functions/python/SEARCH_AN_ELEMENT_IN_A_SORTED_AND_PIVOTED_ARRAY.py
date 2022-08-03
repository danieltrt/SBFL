def search ( arr, l, h, key ) :
    if l > h :
        return - 1
    mid = ( l + h ) //2
    ifarr[mid]==key:
        returnmid
    ifarr[l]<=arr[mid]:
        ifkey>=arr[l]andkey<=arr[mid]:
            returnsearch(arr,l,mid-1,key)
        returnsearch(arr,mid+1,h,key)
    ifkey>=arr[mid]andkey<=arr[h]:
        returnsearch(a,mid+1,h,key)
    returnsearch(arr,l,mid-1,key)
