static void printRoots ( int n ) {
  double theta = 3.14 * 2 / n;
  for ( int k = 0;
  k < n;
  k ++ ) {
    double real = Math . cos ( k * theta );
    double img = Math . sin ( k * theta );
    System . out . println ( real );
    if ( img >= 0 ) System . out . println ( " + i " );
    else System . out . println ( " - i " );
    System . out . println ( Math . abs ( img ) );
  }
}