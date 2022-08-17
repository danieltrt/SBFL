int shortestSeq ( string S , string T ) {
  int m = S . length ( ) ;
  int n = T . length ( ) ;
  int dp [ n + 1 ] [ m + 1 ] ;
  for ( int j = 0 ;
  j < m + 1 ;
  j ++ ) dp [ i ] [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) dp [ 0 ] [ i ] = MAX ;
  for ( int i = 1 ;
  i <= m ;
  i ++ ) {
    for ( int j = 1 ;
    j <= n ;
    j ++ ) {
      char ch = S [ i - 1 ] ;
      int k = j - 1 ;
      while ( k >= 0 ) {
        if ( T [ k ] == ch ) break ;
        k -- ;
      }
      if ( k == - 1 ) dp [ i ] [ j ] = 1 ;
      else dp [ i ] [ j ] = min ( dp [ i - 1 ] [ j ] , dp [ i - 1 ] [ k ] + 1 ) ;
    }
  }
  int ans = dp [ m ] [ n ] ;
  if ( ans >= MAX ) ans = - 1 ;
  return ans ;
}
