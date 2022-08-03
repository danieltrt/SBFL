def calculate ( a ) :
    maximum = max ( a )
    frequency = [ 0 for x in range ( maximum + 1 ) ]
    for i in a :
        frequency [ i ] += 1
    answer = 0
    for i in frequency :
        answer = answer + i * ( i - 1 ) //2
    returnanswer
