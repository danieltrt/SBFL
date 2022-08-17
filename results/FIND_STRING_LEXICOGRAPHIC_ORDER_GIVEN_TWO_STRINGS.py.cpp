string lexNext ( string s , int n ) {
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    if ( s [ i ] != 'z' ) {
      int k = s [ i ] ;
      s [ i ] = ( char ) ( k + 1 ) ;
      return s ;
    }
    s [ i ] = 'a' ;
  }
  return s ;
}
