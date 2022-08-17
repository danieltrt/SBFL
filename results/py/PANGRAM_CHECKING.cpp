bool f_filled ( string s ) {
  bool List [ 26 ] ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) {
    List [ i ] = false ;
  }
  for ( char c : s . c_str ( ) ) {
    if ( ! c == ' ' ) {
      List [ ( c - 'a' ) ] = true ;
    }
  }
  for ( bool ch : List ) {
    if ( ch == false ) {
      return false ;
    }
  }
  return true ;
}
