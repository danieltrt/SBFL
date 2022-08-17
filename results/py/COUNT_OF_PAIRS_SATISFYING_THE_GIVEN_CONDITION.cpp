int f_filled ( int a , int b ) {
  string s = to_string ( b ) ;
  int i = 0 ;
  while ( i < ( s . length ( ) ) ) {
    if ( ( s [ i ] != '9' ) && ( s [ i ] != '.' ) ) break ;
    i ++ ;
  }
  int result ;
  if ( ( i == s . length ( ) ) || ( i == s . length ( ) - 1 ) ) result = a * s . length ( ) ;
  else result = a * ( s . length ( ) - 1 ) ;
  return result ;
}
