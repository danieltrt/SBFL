def check ( num ) :
    digitSum = 0
    while num > 0 :
        rem = num % 10
        digitSum = digitSum + rem
        num = num / 10
    return ( digitSum % 3 == 0 )
