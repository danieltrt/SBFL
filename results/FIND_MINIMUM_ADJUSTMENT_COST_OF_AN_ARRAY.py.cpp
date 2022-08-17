int minAdjustmentCost ( int A [ ] , int n , int target ) {
  int dp [ M + 1 ] [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    dp [ 0 ] [ i ] = abs ( j - A [ 0 ] ) ;
  }
  for ( int j = 0 ;
  j < M + 1 ;
  j ++ ) {
    dp [ 0 ] [ j ] = abs ( j - A [ 0 ] ) ;
  }
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < M + 1 ;
    j ++ ) {
      dp [ i ] [ j ] = 100000000 ;
      for ( int k = max ( j - target , 0 ) ;
      k <= min ( M , j + target ) ;
      k ++ ) {
        dp [ i ] [ j ] = min ( dp [ i ] [ j ] , dp [ i - 1 ] [ k ] + abs ( A [ i ] - j ) ) ;
      }
    }
  }
  int res = 10000000 ;
  for ( int j = 0 ;
  j < M + 1 ;
  j ++ ) {
    res = min ( res , dp [ n - 1 ] [ j ] ) ;
  }
  return res ;
}
