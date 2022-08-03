def sparseSearch ( arr, key, low, high ) :
    left = 0;
    right = 0
    while low <= high :
        mid = ( low + high ) //2
        ifarr[mid]=='':
            left=mid-1
            right=mid+1
            ifleft<lowandright>high:
                return-1
            elifright<=highandarr[right]!='':
                mid=right
            elifleft>=lowandarr[left]!='':
                mid=left
        ifarr[mid]==key:
            print('Found string {} at index {}'.format(arr[mid],mid))
            return
        elifarr[mid]>key:
            high=mid-1
        elifarr[mid]<key:
            low=mid+1
        left-=1
        right+=1
    return-1
