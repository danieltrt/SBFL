def maxSum ( arr, n ) :
    arr . sort ( )
    sum = 0
    for i in range ( n ) :
        sum += arr [ i ] * i
    return sum
