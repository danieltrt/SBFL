bool isPower ( int x, int y ) {
  int res1 = log ( y ) / log ( x );
  double res2 = log ( y ) / log ( x );
  return ( res1 == res2 );
}