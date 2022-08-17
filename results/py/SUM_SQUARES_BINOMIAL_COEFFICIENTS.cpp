int f_filled ( int n ) {
  int C [ n + 1 ] [ n + 1 ] ;
  for ( int j = 0 ;
  j <= n ;
  j ++ ) {
    for ( int i = 0 ;
    i <= n ;
    i ++ ) {
      if ( ( j == 0 || j == i ) && ( C [ i ] [ j ] == 0 ) ) C [ i ] [ j ] = 1 ;
      else C [ i ] [ j ] = ( C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ] ) ;
    }
  }
  int sum = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) sum = sum + ( C [ n ] [ i ] * C [ n ] [ i ] ) ;
  return sum ;
}
