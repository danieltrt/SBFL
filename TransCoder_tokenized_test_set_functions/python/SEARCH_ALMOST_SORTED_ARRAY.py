def binarySearch ( arr, l, r, x ) :
    if ( r >= l ) :
        mid = int ( l + ( r - l ) / 2 )
        if ( arr [ mid ] == x ) : return mid
        if ( mid > l and arr [ mid - 1 ] == x ) :
            return ( mid - 1 )
        if ( mid < r and arr [ mid + 1 ] == x ) :
            return ( mid + 1 )
        if ( arr [ mid ] > x ) :
            return binarySearch ( arr, l, mid - 2, x )
        return binarySearch ( arr, mid + 2, r, x )
    return - 1
