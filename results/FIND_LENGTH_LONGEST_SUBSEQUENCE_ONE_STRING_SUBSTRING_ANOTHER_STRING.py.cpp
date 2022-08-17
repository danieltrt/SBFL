int maxSubsequenceSubstring ( string x , string y , int n , int m ) {
  int dp [ MAX ] [ MAX ] ;
  for ( int i = 0 ;
  i < MAX ;
  i ++ ) {
    dp [ i ] [ i ] = 0 ;
  }
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    for ( int j = 1 ;
    j <= n ;
    j ++ ) {
      if ( ( x [ j - 1 ] == y [ i - 1 ] ) && ( x [ j ] == y [ i - 1 ] ) ) dp [ i ] [ j ] = 1 + dp [ i - 1 ] [ j - 1 ] ;
      else dp [ i ] [ j ] = dp [ i ] [ j - 1 ] ;
    }
  }
  int ans = 0 ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) ans = max ( ans , dp [ i ] [ n ] ) ;
  return ans ;
}
