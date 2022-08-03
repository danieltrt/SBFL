def countSub ( arr, n ) :
    count = [ 0 for i in range ( 10 ) ]
    for i in range ( n ) :
        for j in range ( arr [ i ] - 1, - 1, - 1 ) :
            count [ arr [ i ] ] += count [ j ]
        count [ arr [ i ] ] += 1
    result = 0
    for i in range ( 10 ) :
        result += count [ i ]
    return result
