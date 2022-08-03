static int maximumSegments ( int n, int a, int b, int c ) {
  int dp [ ] = new int [ n + 10 ];
  Arrays . fill ( dp, - 1 );
  dp [ 0 ] = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( dp [ i ] != - 1 ) {
      if ( i + a <= n ) dp [ i + a ] = Math . max ( dp [ i ] + 1, dp [ i + a ] );
      if ( i + b <= n ) dp [ i + b ] = Math . max ( dp [ i ] + 1, dp [ i + b ] );
      if ( i + c <= n ) dp [ i + c ] = Math . max ( dp [ i ] + 1, dp [ i + c ] );
    }
  }
  return dp [ n ];
}