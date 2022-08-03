def lis ( arr ) :
    global maximum
    n = len ( arr )
    maximum = 1
    _lis ( arr, n )
    return maximum
