int longestNull ( string S ) {
  string :: size_type pos = S . find ( '@' ) ;
  if ( pos != string :: npos ) {
    pos = S . find ( '@' ) ;
  }
  int maxlen = 0 ;
  for ( int i = 0 ;
  i < pos ;
  i ++ ) {
    string :: size_type size = S . length ( ) ;
    while ( ( size >= 3 ) && ( S [ size - 3 ] == '1' && S [ size - 2 ] == '0' && S [ size - 1 ] == '0' ) ) {
      pos = S . find ( '@' , pos + 1 ) ;
    }
    string tmp = S . substr ( pos + 1 ) ;
    maxlen = max ( maxlen , i - tmp . length ( ) ) ;
  }
  return maxlen ;
}
