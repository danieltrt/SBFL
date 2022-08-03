def findSum ( n ) :
    multiTerms = n * ( n + 1 ) //2
    sm=multiTerms
    foriinrange(2,n+1):
        multiTerms=multiTerms-(i-1)
        sm=sm+multiTerms*i
    returnsm
