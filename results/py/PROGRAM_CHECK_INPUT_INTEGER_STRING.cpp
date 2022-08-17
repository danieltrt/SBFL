bool f_filled ( string s ) {
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    if ( isdigit ( s [ i ] ) != true ) return false ;
  }
  return true ;
}
