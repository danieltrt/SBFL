def getOddOccurrence ( arr ) :
    res = 0
    for element in arr :
        res = res ^ element
    return res
