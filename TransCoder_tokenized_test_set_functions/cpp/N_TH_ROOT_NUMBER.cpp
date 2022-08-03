double nthRoot ( int A, int N ) {
  double xPre = rand ( ) % 10;
  double eps = 1e - 3;
  double delX = INT_MAX;
  double xK;
  while ( delX > eps ) {
    xK = ( ( N - 1.0 ) * xPre + ( double ) A / pow ( xPre, N - 1 ) ) / ( double ) N;
    delX = abs ( xK - xPre );
    xPre = xK;
  }
  return xK;
}