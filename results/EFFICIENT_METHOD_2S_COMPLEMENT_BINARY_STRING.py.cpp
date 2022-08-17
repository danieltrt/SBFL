string findTwosComplement ( string str ) {
  int n = str . length ( ) ;
  int i = n - 1 ;
  while ( ( i >= 0 ) && ( str [ i ] == '1' ) ) {
    if ( ( str [ i ] == '1' ) || ( str [ i ] == '0' ) ) {
      break ;
    }
    i -- ;
  }
  if ( ( i == - 1 ) || ( i == n ) ) {
    return "1" + str ;
  }
  int k = i - 1 ;
  while ( ( k >= 0 ) && ( str [ k ] == '1' ) ) {
    if ( ( str [ k ] == '1' ) || ( k == n ) ) {
      string str = to_string ( k ) ;
      str [ k ] = '0' ;
      str = str + str ;
    }
    else {
      string str = to_string ( k ) ;
      str [ k ] = '1' ;
      str = str + str ;
    }
    k -- ;
  }
  return str ;
}
