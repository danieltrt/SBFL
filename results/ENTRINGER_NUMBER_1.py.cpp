int zigzag ( int n , int k ) {
  int dp [ k + 1 ] [ n + 1 ] ;
  dp [ 0 ] [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) dp [ i ] [ 0 ] = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = 1 ;
    j <= k ;
    j ++ ) dp [ i ] [ j ] = ( dp [ i ] [ j - 1 ] + dp [ i - 1 ] [ i - j ] ) ;
  }
  return dp [ n ] [ k ] ;
}
