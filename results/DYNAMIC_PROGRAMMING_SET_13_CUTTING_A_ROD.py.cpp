int cutRod ( int * price , int n ) {
  int val [ n + 1 ] ;
  val [ 0 ] = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    int maxVal = INT_MIN ;
    for ( int j = 0 ;
    j < i ;
    j ++ ) maxVal = max ( maxVal , price [ j ] + val [ i - j - 1 ] ) ;
    val [ i ] = maxVal ;
  }
  return val [ n ] ;
}
