def carveCross ( str ) :
    n = len ( str )
    if ( n % 2 == 0 ) :
        print ( "Not possible. Please enter ", "odd length string.\n" )
    else :
        arr = [ [ False for x in range ( max ) ] for y in range ( max ) ]
        m = n //2
        foriinrange(n):
            forjinrange(n):
                arr[i][j]='X'
        foriinrange(n):
            arr[i][m]=str[i]
        foriinrange(n):
            arr[m][i]=str[i]
        foriinrange(n):
            forjinrange(n):
                print(arr[i][j],end=" ")
            print()
    
