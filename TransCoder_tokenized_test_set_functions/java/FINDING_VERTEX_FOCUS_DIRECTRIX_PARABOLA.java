static void parabola ( float a, float b, float c ) {
  System . out . println ( "Vertex: (" + ( - b / ( 2 * a ) ) + ", " + ( ( ( 4 * a * c ) - ( b * b ) ) / ( 4 * a ) ) + ")" );
  System . out . println ( "Focus: (" + ( - b / ( 2 * a ) ) + ", " + ( ( ( 4 * a * c ) - ( b * b ) + 1 ) / ( 4 * a ) ) + ")" );
  System . out . println ( "Directrix:" + " y=" + ( int ) ( c - ( ( b * b ) + 1 ) * 4 * a ) );
}