string convert ( string s ) {
  int n = s . length ( ) ;
  string s1 ;
  s1 = s1 + s [ 0 ] . tolower ( ) ;
  int i = 1 ;
  while ( i < n ) {
    if ( ( s [ i ] == ' ' ) && i <= n ) {
      s1 = s1 + " " + ( s [ i + 1 ] ) . tolower ( ) ;
      i = i + 1 ;
    }
    else s1 = s1 + ( s [ i ] ) . toupper ( ) ;
    i = i + 1 ;
  }
  return s1 ;
}
