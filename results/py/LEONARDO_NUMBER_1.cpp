int f_filled ( int n ) {
  int dp [ n ] ;
  ;
  dp [ 0 ] = 1 ;
  dp [ 1 ] = 1 ;
  dp [ 2 ] = 1 ;
  dp [ 3 ] = 1 ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) dp [ i ] = dp [ i - 1 ] + dp [ i - 2 ] + 1 ;
  return dp [ n ] ;
}
