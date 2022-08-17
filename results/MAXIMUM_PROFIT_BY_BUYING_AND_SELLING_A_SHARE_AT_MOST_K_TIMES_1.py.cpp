double maxProfit ( double price [ ] , int n , int k ) {
  double profit [ n + 1 ] [ k + 1 ] ;
  for ( int j = 0 ;
  j < k + 1 ;
  j ++ ) {
    for ( int i = 1 ;
    i <= k ;
    i ++ ) {
      double prevDiff = ( double ) numeric_limits < double > :: infinity ( ) ;
      for ( int j = 1 ;
      j < n ;
      j ++ ) {
        prevDiff = max ( prevDiff , profit [ i - 1 ] [ j - 1 ] - price [ j - 1 ] ) ;
        profit [ i ] [ j ] = max ( profit [ i ] [ j - 1 ] , price [ j ] + prevDiff ) ;
      }
    }
  }
  return profit [ k ] [ n - 1 ] ;
}
