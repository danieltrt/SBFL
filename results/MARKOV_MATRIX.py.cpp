bool checkMarkov ( int * * m ) {
  for ( int i = 0 ;
  i != sizeof ( m ) / sizeof ( int ) ;
  i ++ ) {
    int sm = 0 ;
    for ( int j = 0 ;
    j != sizeof ( m [ i ] ) / sizeof ( int ) ;
    j ++ ) sm = sm + m [ i ] [ j ] ;
    if ( ( sm != 1 ) && ( sm != 2 ) ) return false ;
  }
  return true ;
}
