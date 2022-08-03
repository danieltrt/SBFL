static double nthRoot ( int A, int N ) {
  double xPre = Math . random ( ) % 10;
  double eps = 0.001;
  double delX = 2147483647;
  double xK = 0.0;
  while ( delX > eps ) {
    xK = ( ( N - 1.0 ) * xPre + ( double ) A / Math . pow ( xPre, N - 1 ) ) / ( double ) N;
    delX = Math . abs ( xK - xPre );
    xPre = xK;
  }
  return xK;
}