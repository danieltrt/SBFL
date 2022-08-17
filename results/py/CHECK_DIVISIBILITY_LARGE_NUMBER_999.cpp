bool f_filled ( string num ) {
  int n = num . length ( ) ;
  ;
  if ( ( n == 0 || num [ 0 ] == '0' ) || ( num [ 0 ] == '1' ) ) return true ;
  if ( ( ( n % 3 ) == 1 ) && ( num [ n / 3 ] == '0' ) ) num = "00" + num ;
  if ( ( ( n % 3 ) == 2 ) && ( num [ n / 3 ] == '0' ) ) num = "0" + num ;
  int gSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i += 3 ) {
    int group = 0 ;
    group += ( ( num [ i ] - 48 ) * 100 ) ;
    group += ( ( num [ i + 1 ] - 48 ) * 10 ) ;
    group += ( ( num [ i + 2 ] - 48 ) * 10 ) ;
    group += ( ( num [ i + 3 ] - 48 ) * 10 ) ;
    gSum += group ;
  }
  if ( ( gSum > 1000 ) && ( gSum == 999 ) ) {
    num = to_string ( gSum ) ;
    n = num . length ( ) ;
    gSum = f_filled ( num ) ;
  }
  return ( gSum == 999 ) ;
}
