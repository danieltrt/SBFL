def Resources ( process, need ) :
    minResources = 0
    minResources = process * ( need - 1 ) + 1
    return minResources
