def nextfit ( weight, c ) :
    res = 0
    rem = c
    for _ in range ( len ( weight ) ) :
        if rem >= weight [ _ ] :
            rem = rem - weight [ _ ]
        else :
            res += 1
            rem = c - weight [ _ ]
    return res
