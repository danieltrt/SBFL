int f_filled ( string s ) {
  int result = 0 ;
  ;
  int n = s . length ( ) ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = i ;
    j < n ;
    j ++ ) {
      if ( ( s [ i ] == s [ j ] ) || ( s [ i ] == s [ j ] ) ) {
        result = result + 1 ;
      }
    }
  }
  return result ;
}
