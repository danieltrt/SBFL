def printDuplicates ( arr ) :
    dict = {
    }
    
    for ele in arr :
        try :
            dict [ ele ] += 1
        except :
            dict [ ele ] = 1
    for item in dict :
        if ( dict [ item ] > 1 ) :
            print ( item, end = " " )
    print ( "\n" )
