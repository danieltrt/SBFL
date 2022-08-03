def lexSmallest ( a, n ) :
    a . sort ( reverse = True )
    answer = ""
    for i in range ( n ) :
        answer += a [ i ]
    return answer
