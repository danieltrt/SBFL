static void checkCollision ( int a, int b, int c, int x, int y, int radius ) {
  double dist = ( Math . abs ( a * x + b * y + c ) ) / Math . sqrt ( a * a + b * b );
  if ( radius == dist ) System . out . println ( "Touch" );
  else if ( radius > dist ) System . out . println ( "Intersect" );
  else System . out . println ( "Outside" );
}