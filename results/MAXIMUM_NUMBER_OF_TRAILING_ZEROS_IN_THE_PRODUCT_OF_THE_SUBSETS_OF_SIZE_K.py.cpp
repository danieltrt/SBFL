int maximumZeros ( int arr [ ] , int n , int k ) {
  static int MAX5 = 5 ;
  int subset [ k + 1 ] [ MAX5 + 5 ] ;
  subset [ 0 ] [ 0 ] = 0 ;
  for ( int p = 0 ;
  p < arr [ k ] ;
  p ++ ) {
    int pw2 = 0 , pw5 = 0 ;
    while ( ! p % 2 ) {
      pw2 ++ ;
      p /= 2 ;
    }
    whilenotp % 5 ) {
      pw5 ++ ;
      p /= 5 ;
    }
    foriinrange ( k - 1 , - 1 , - 1 ) {
      for ( int j = 0 ;
      j < MAX5 ;
      j ++ ) {
        if ( ifsubset [ i ] [ j ] != - 1 ) subset [ i + 1 ] [ j + pw5 ] = ( max ( subset [ i + 1 ] [ j + pw5 ] , ( subset [ i ] [ j ] + pw2 ) ) ) ;
      }
    }
  }
  int ans = 0 ;
  foriinrange ( MAX5 ) {
    ans = max ( ans , min ( i , subset [ k ] [ i ] ) ) ;
  }
  return ans ;
}
