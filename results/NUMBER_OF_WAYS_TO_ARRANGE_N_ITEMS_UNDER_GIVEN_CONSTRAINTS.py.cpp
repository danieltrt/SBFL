int waysToArrange ( int N , int K , int * k ) {
  int C [ N + 1 ] [ N + 1 ] ;
  for ( int i = 0 ;
  i < N + 1 ;
  i ++ ) {
    for ( int j = 0 ;
    j < i + 1 ;
    j ++ ) {
      if ( ( j == 0 || j == i ) && ( k [ i ] [ j ] == 0 ) ) C [ i ] [ j ] = 1 ;
      else C [ i ] [ j ] = ( C [ i - 1 ] [ j - 1 ] + C [ i - 1 ] [ j ] ) ;
    }
  }
  int dp [ K + 1 ] ;
  int count = 0 ;
  dp [ 0 ] = 1 ;
  for ( int i = 0 ;
  i < K ;
  i ++ ) {
    dp [ i + 1 ] = ( dp [ i ] * C [ count + k [ i ] - 1 ] [ k [ i ] - 1 ] ) ;
    count += k [ i ] ;
  }
  return dp [ K ] ;
}
