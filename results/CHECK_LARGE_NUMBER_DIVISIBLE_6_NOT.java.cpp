bool check ( string str ) {
  int n = str . length ( ) ;
  if ( ( str [ n - 1 ] - '0' ) % 2 != 0 ) return false ;
  int digitSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    digitSum += ( str [ i ] - '0' ) ;
  }
  return ( digitSum % 3 == 0 ) ;
}
