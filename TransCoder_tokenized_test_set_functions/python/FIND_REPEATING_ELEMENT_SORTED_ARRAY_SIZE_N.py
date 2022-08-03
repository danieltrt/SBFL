def findRepeatingElement ( arr, low, high ) :
    if low > high :
        return - 1
    mid = ( low + high ) / 2
    if ( arr [ mid ] != mid + 1 ) :
        if ( mid > 0 and arr [ mid ] == arr [ mid - 1 ] ) :
            return mid
        return findRepeatingElement ( arr, low, mid - 1 )
    return findRepeatingElement ( arr, mid + 1, high )
