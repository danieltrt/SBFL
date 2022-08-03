def MAXMIN ( arr, n ) :
    MIN = 10 * * 9
    MAX = - 10 * * 9
    for i in range ( n ) :
        for j in range ( n //2+1):
            if(arr[i][j]>arr[i][n-j-1]):
                if(MIN>arr[i][n-j-1]):
                    MIN=arr[i][n-j-1]
                if(MAX<arr[i][j]):
                    MAX=arr[i][j]
            else:
                if(MIN>arr[i][j]):
                    MIN=arr[i][j]
                if(MAX<arr[i][n-j-1]):
                    MAX=arr[i][n-j-1]
    print("MAXimum =",MAX,", MINimum =",MIN)
