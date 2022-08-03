static double minRevolutions ( double r, int x1, int y1, int x2, int y2 ) {
  double d = Math . sqrt ( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) );
  return Math . ceil ( d / ( 2 * r ) );
}