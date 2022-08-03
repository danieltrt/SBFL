def Right_most_setbit ( num ) :
    pos = 1
    for i in range ( INT_SIZE ) :
        if not ( num & ( 1 << i ) ) :
            pos += 1
        else :
            break
    return pos
