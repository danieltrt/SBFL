string moveSpaceInFront ( string s ) {
  int i = s . length ( ) - 1 ;
  ;
  for ( int j = i ;
  j >= 0 ;
  j -- ) {
    if ( ( s [ j ] != ' ' ) && ( s [ j ] != ' ' ) ) {
      s = s . substr ( 0 , i ) + s [ j ] + s . substr ( i + 1 ) ;
      i -- ;
    }
  }
  while ( ( i >= 0 ) && ( s [ i ] != ' ' ) ) {
    s = s . substr ( 0 , i ) + ' ' + s . substr ( i + 1 ) ;
    i -- ;
  }
  return s ;
}
