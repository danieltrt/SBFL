long long arrangeBraces ( int n, int pos [ ], int k ) {
  bool h [ N ];
  int dp [ N ] [ N ];
  memset ( h, 0, sizeof h );
  memset ( dp, 0, sizeof dp );
  for ( int i = 0;
  i < k;
  i ++ ) h [ pos [ i ] ] = 1;
  dp [ 0 ] [ 0 ] = 1;
  for ( int i = 1;
  i <= 2 * n;
  i ++ ) {
    for ( int j = 0;
    j <= 2 * n;
    j ++ ) {
      if ( h [ i ] ) {
        if ( j != 0 ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ];
        else dp [ i ] [ j ] = 0;
      }
      else {
        if ( j != 0 ) dp [ i ] [ j ] = dp [ i - 1 ] [ j - 1 ] + dp [ i - 1 ] [ j + 1 ];
        else dp [ i ] [ j ] = dp [ i - 1 ] [ j + 1 ];
      }
    }
  }
  return dp [ 2 * n ] [ 0 ];
}