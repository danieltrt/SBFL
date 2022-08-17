int countMinReversals ( string expr ) {
  int lenn = expr . length ( ) ;
  if ( ( lenn % 2 ) != 0 ) return - 1 ;
  string :: size_type pos = 0 ;
  for ( int i = 0 ;
  i < lenn ;
  i ++ ) {
    if ( ( expr [ i ] == '\0' ) && ( pos < expr . length ( ) ) ) {
      if ( ( expr [ pos ] == '\0' ) ) pos -- ;
      else pos ++ ;
    }
    else pos ++ ;
  }
  int redLen = pos ;
  int n = 0 ;
  while ( ( pos < expr . length ( ) ) && ( pos < lenn ) ) {
    pos ++ ;
    n ++ ;
  }
  return ( redLen / 2 + n % 2 ) ;
}
