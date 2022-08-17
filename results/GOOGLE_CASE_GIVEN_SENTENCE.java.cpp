string convert ( string s ) {
  int n = s . length ( ) ;
  string s1 ;
  s1 = s1 + tolower ( s [ 0 ] ) ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( s [ i ] == ' ' && i < n ) {
      s1 = s1 + " " + tolower ( s [ i + 1 ] ) ;
      i ++ ;
    }
    else {
      s1 = s1 + toupper ( s [ i ] ) ;
    }
  }
  return s1 ;
}
