long long f_filled ( int m , int n , int x ) {
  long long table [ n + 1 ] [ x + 1 ] ;
  for ( int j = 1 ;
  j <= m && j <= x ;
  j ++ ) {
    table [ 1 ] [ j ] = 1 ;
  }
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    for ( int j = 1 ;
    j <= x ;
    j ++ ) {
      for ( int k = 1 ;
      k < j && k <= m ;
      k ++ ) {
        table [ i ] [ j ] += table [ i - 1 ] [ j - k ] ;
      }
    }
  }
  return table [ n ] [ x ] ;
}
