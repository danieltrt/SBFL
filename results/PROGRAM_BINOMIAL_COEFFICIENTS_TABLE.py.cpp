void printbinomial ( int max ) {
  for ( int m = 0 ;
  m < max + 1 ;
  m ++ ) {
    cout << m << " 2d" << endl ;
    int binom = 1 ;
    for ( int x = 0 ;
    x < m + 1 ;
    x ++ ) {
      if ( m != 0 && x != 0 ) binom = binom * ( m - x + 1 ) / x ;
      cout << " 4d" << binom << " " ;
    }
    cout << "\n" << endl ;
  }
}
