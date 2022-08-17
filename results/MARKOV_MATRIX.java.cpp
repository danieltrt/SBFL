bool checkMarkov ( double m [ ] [ 3 ] ) {
  for ( int i = 0 ;
  i < sizeof ( m ) / sizeof ( m [ 0 ] ) ;
  i ++ ) {
    double sum = 0 ;
    for ( int j = 0 ;
    j < sizeof ( m [ i ] ) / sizeof ( m [ i ] [ j ] ) ;
    j ++ ) {
      sum = sum + m [ i ] [ j ] ;
    }
    if ( sum != 1 ) return false ;
  }
  return true ;
}
