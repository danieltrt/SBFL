def search ( arr, low, high ) :
    if low > high :
        return None
    if low == high :
        return arr [ low ]
    mid = ( low + high ) / 2;
    
    if mid % 2 == 0 :
        if arr [ mid ] == arr [ mid + 1 ] :
            return search ( arr, mid + 2, high )
        else :
            return search ( arr, low, mid )
    else :
        if arr [ mid ] == arr [ mid - 1 ] :
            return search ( arr, mid + 1, high )
        else :
            return search ( arr, low, mid - 1 )
    
