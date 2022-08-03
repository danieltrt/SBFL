bool checkMarkov ( double m [ ] [ n ] ) {
  for ( int i = 0;
  i < n;
  i ++ ) {
    double sum = 0;
    for ( int j = 0;
    j < n;
    j ++ ) sum = sum + m [ i ] [ j ];
    if ( sum != 1 ) return false;
  }
  return true;
}