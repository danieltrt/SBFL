void printDistance ( int * * mat ) {
  int N = ( int ) ( ( ( long long ) mat [ 0 ] ) / ( ( long long ) mat [ 1 ] ) ) ;
  int * * ans = new int * [ N ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < M ;
    j ++ ) {
      ans [ i ] [ j ] = 999999999999 ;
    }
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < M ;
    j ++ ) {
      for ( int k = 0 ;
      k < N ;
      k ++ ) {
        for ( int l = 0 ;
        l < M ;
        l ++ ) {
          if ( ( mat [ k ] [ l ] == 1 ) && ( mat [ k ] [ l ] == 1 ) ) {
            ans [ i ] [ j ] = min ( ans [ i ] [ j ] , abs ( i - k ) + abs ( j - l ) ) ;
          }
        }
      }
    }
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < M ;
    j ++ ) {
      cout << ans [ i ] [ j ] << " " ;
    }
    cout << endl ;
  }
}
