static int zigzag ( int n, int k ) {
  int dp [ ] [ ] = new int [ n + 1 ] [ k + 1 ];
  dp [ 0 ] [ 0 ] = 1;
  for ( int i = 1;
  i <= n;
  i ++ ) dp [ i ] [ 0 ] = 0;
  for ( int i = 1;
  i <= n;
  i ++ ) {
    for ( int j = 1;
    j <= Math . min ( i, k );
    j ++ ) dp [ i ] [ j ] = dp [ i ] [ j - 1 ] + dp [ i - 1 ] [ i - j ];
  }
  return dp [ n ] [ k ];
}