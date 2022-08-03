def SternSequenceFunc ( BrocotSequence, n ) :
    for i in range ( 1, n ) :
        considered_element = BrocotSequence [ i ]
        precedent = BrocotSequence [ i - 1 ]
        BrocotSequence . append ( considered_element + precedent )
        BrocotSequence . append ( considered_element )
    for i in range ( 0, 15 ) :
        print ( BrocotSequence [ i ], end = " " )
    
