def reorder ( arr, index, n ) :
    for i in range ( 0, n ) :
        while ( index [ i ] != i ) :
            oldTargetI = index [ index [ i ] ]
            oldTargetE = arr [ index [ i ] ]
            arr [ index [ i ] ] = arr [ i ]
            index [ index [ i ] ] = index [ i ]
            index [ i ] = oldTargetI
            arr [ i ] = oldTargetE
    
