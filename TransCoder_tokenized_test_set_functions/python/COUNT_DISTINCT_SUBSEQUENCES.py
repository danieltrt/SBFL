def countSub ( ss ) :
    last = [ - 1 for i in range ( MAX_CHAR + 1 ) ]
    n = len ( ss )
    dp = [ - 2 for i in range ( n + 1 ) ]
    dp [ 0 ] = 1
    for i in range ( 1, n + 1 ) :
        dp [ i ] = 2 * dp [ i - 1 ]
        if last [ ord ( ss [ i - 1 ] ) ] != - 1 :
            dp [ i ] = dp [ i ] - dp [ last [ ord ( ss [ i - 1 ] ) ] ]
        last [ ord ( ss [ i - 1 ] ) ] = i - 1
    return dp [ n ]
