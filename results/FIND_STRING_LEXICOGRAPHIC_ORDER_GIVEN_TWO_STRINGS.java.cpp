string lexNext ( string str , int n ) {
  string :: size_type pos = 0 ;
  for ( int i = n - 1 ;
  i >= 0 ;
  i -- ) {
    if ( str [ i ] != 'z' ) {
      pos ++ ;
      return string ( pos , str . end ( ) ) ;
    }
    pos ++ ;
  }
  return string ( pos , str . end ( ) ) ;
}
