long long countBT ( int h ) {
  long long dp [ h + 1 ] ;
  dp [ 0 ] = 1 ;
  dp [ 1 ] = 1 ;
  for ( int i = 2 ;
  i <= h ;
  ++ i ) {
    dp [ i ] = ( dp [ i - 1 ] * ( ( 2 * dp [ i - 2 ] ) % MOD + dp [ i - 1 ] ) % MOD ) % MOD ;
  }
  return dp [ h ] ;
}
