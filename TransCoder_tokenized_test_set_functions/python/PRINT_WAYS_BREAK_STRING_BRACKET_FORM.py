def findCombinations ( string, index, out ) :
    if index == len ( string ) :
        print ( out )
    for i in range ( index, len ( string ), 1 ) :
        findCombinations ( string, i + 1, out + "(" + string [ index : i + 1 ] + ")" )
    
