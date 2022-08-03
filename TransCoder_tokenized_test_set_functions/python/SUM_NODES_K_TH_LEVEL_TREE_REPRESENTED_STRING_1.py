def sumAtKthLevel ( tree, k, i, level ) :
    if ( tree [ i [ 0 ] ] == '(' ) :
        i [ 0 ] += 1
        if ( tree [ i [ 0 ] ] == ')' ) :
            return 0
        sum = 0
        if ( level == k ) :
            sum = int ( tree [ i [ 0 ] ] )
        i [ 0 ] += 1
        leftsum = sumAtKthLevel ( tree, k, i, level + 1 )
        i [ 0 ] += 1
        rightsum = sumAtKthLevel ( tree, k, i, level + 1 )
        i [ 0 ] += 1
        return sum + leftsum + rightsum
    
