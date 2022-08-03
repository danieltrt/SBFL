void printRoots ( int n ) {
  double theta = M_PI * 2 / n;
  for ( int k = 0;
  k < n;
  k ++ ) {
    double real = cos ( k * theta );
    double img = sin ( k * theta );
    printf ( "%.6f", real );
    img >= 0 ? printf ( " + i " ) : printf ( " - i " );
    printf ( "%.6f\n", abs ( img ) );
  }
}