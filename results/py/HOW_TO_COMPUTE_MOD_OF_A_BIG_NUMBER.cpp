int f_filled ( string num , int a ) {
  int res = 0 ;
  for ( int i = 0 ;
  i != num . length ( ) ;
  i ++ ) {
    res = ( res * 10 + atoi ( num . c_str ( ) ) ) % a ;
    ;
  }
  return res ;
}
