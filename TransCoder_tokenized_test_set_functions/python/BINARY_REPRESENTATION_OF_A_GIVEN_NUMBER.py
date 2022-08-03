def bin ( n ) :
    if n > 1 :
        bin ( n //2)
    print(n%2,end="")
