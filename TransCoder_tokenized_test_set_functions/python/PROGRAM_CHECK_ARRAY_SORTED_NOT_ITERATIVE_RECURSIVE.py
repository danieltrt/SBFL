def arraySortedOrNot ( arr ) :
    n = len ( arr )
    if n == 1 or n == 0 :
        return True
    return arr [ 0 ] <= arr [ 1 ] and arraySortedOrNot ( arr [ 1 : ] )
