int findCount ( string str ) {
  int result = 0 ;
  for ( int i = 0 ;
  i < str . length ( ) ;
  i ++ ) {
    if ( ( ( str [ i ] - 'a' ) == 'a' ) || ( ( str [ i ] - 'A' ) == 'A' ) ) {
      result ++ ;
    }
  }
  return result ;
}
