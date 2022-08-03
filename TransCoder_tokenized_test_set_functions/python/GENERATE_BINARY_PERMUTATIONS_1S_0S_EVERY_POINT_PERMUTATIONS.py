def generate ( ones, zeroes, str, len1 ) :
    if ( len1 == len ( str ) ) :
        print ( str, end = " " )
        return
    generate ( ones + 1, zeroes, str + "1", len1 )
    if ( ones > zeroes ) :
        generate ( ones, zeroes + 1, str + "0", len1 )
    
