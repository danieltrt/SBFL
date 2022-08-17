int MinimumCost ( int * cost , int & n , int W ) {
  int val [ W + 1 ] ;
  int wt [ W + 1 ] ;
  int size = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( cost [ i ] != - 1 ) && ( wt [ i ] == W ) ) {
      val [ i ] = cost [ i ] ;
      wt [ i ] = i + 1 ;
      size ++ ;
    }
  }
  n = size ;
  int minCost [ W + 1 ] [ W + 1 ] ;
  for ( int j = 0 ;
  j < n + 1 ;
  j ++ ) {
    minCost [ 0 ] [ j ] = INF ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    minCost [ i ] [ 0 ] = 0 ;
  }
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    for ( int j = 1 ;
    j <= W ;
    j ++ ) {
      if ( ( wt [ i - 1 ] > j ) && ( wt [ i ] > j ) ) {
        minCost [ i ] [ j ] = minCost [ i - 1 ] [ j ] ;
      }
      else {
        minCost [ i ] [ j ] = min ( minCost [ i - 1 ] [ j ] , minCost [ i ] [ j - wt [ i - 1 ] ] + val [ i - 1 ] ) ;
      }
    }
  }
  if ( ( minCost [ n ] [ W ] == INF ) && ( wt [ W ] == W ) ) {
    return - 1 ;
  }
  else {
    return minCost [ n ] [ W ] ;
  }
}
