string f_filled ( string s , char c1 , char c2 ) {
  int l = s . length ( ) ;
  for ( int i = 0 ;
  i < l ;
  i ++ ) {
    if ( ( s [ i ] == c1 ) || ( s [ i ] == c2 ) ) {
      s = s . substr ( 0 , i ) + c2 + s . substr ( i + 1 ) ;
    }
    else if ( ( s [ i ] == c2 ) || ( s [ i ] == c1 ) ) {
      s = s . substr ( 0 , i ) + c1 + s . substr ( i + 1 ) ;
    }
  }
  return s ;
}
