def parabola ( a, b, c ) :
    print ( "Vertex: (", ( - b / ( 2 * a ) ), ", ", ( ( ( 4 * a * c ) - ( b * b ) ) / ( 4 * a ) ), ")", sep = "" )
    print ( "Focus: (", ( - b / ( 2 * a ) ), ", ", ( ( ( 4 * a * c ) - ( b * b ) + 1 ) / ( 4 * a ) ), ")", sep = "" )
    print ( "Directrix: y=", c - ( ( b * b ) + 1 ) * 4 * a, sep = "" )
