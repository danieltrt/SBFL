int numofArray ( int n , int m ) {
  int dp [ MAX ] [ MAX ] ;
  int j ;
  int i ;
  int mu [ MAX ] [ MAX ] ;
  for ( i = 1 ;
  i <= m ;
  i ++ ) {
    for ( j = 2 * i ;
    j <= m ;
    j += i ) {
      dp [ j ] [ i ] = 0 ;
      mu [ i ] [ j ] = 0 ;
    }
    dp [ i ] [ i ] = i ;
  }
  for ( i = 1 ;
  i <= m ;
  i ++ ) dp [ 1 ] [ i ] = 1 ;
  for ( i = 2 ;
  i <= n ;
  i ++ ) {
    for ( j = 1 ;
    j <= m ;
    j ++ ) {
      dp [ i ] [ j ] = 0 ;
      for ( x = di [ j ] ;
      x <= di [ j ] ;
      x ++ ) dp [ i ] [ j ] += dp [ i - 1 ] [ x ] ;
      for ( x = mu [ j ] ;
      x <= mu [ j ] ;
      x ++ ) dp [ i ] [ j ] += dp [ i - 1 ] [ x ] ;
    }
  }
  int ans = 0 ;
  for ( i = 1 ;
  i <= m ;
  i ++ ) {
    ans += dp [ n ] [ i ] ;
    di [ i ] . clear ( ) ;
    mu [ i ] . clear ( ) ;
  }
  return ans ;
}
