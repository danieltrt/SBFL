string noAdjacentDup ( string s1 ) {
  int n = s1 . length ( ) ;
  string :: size_type pos = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( s [ pos ] == s [ pos - 1 ] ) {
      s [ pos ] = 'a' ;
      while ( s [ pos ] == s [ pos - 1 ] || ( pos + 1 < n && s [ pos ] == s [ pos + 1 ] ) ) {
        pos ++ ;
      }
      pos ++ ;
    }
  }
  return ( string ( s , pos ) ) ;
}
