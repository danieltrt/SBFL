def findMajority ( arr, n ) :
    maxCount = 0;
    
    index = - 1
    for i in range ( n ) :
        count = 0
        for j in range ( n ) :
            if ( arr [ i ] == arr [ j ] ) :
                count += 1
        if ( count > maxCount ) :
            maxCount = count
            index = i
    if ( maxCount > n //2):
        print(arr[index])
    else:
        print("No Majority Element")
    
