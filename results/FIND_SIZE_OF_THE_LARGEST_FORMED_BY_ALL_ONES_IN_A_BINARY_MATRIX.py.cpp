int findLargestPlus ( int * * mat ) {
  int * left [ N ] ;
  int * right [ N ] ;
  int * top [ N ] ;
  int * bottom [ N ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    top [ 0 ] [ i ] = mat [ 0 ] [ i ] ;
    bottom [ N - 1 ] [ i ] = mat [ N - 1 ] [ i ] ;
    left [ i ] [ 0 ] = mat [ i ] [ 0 ] ;
    right [ i ] [ N - 1 ] = mat [ i ] [ N - 1 ] ;
  }
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 1 ;
    j < N ;
    j ++ ) {
      if ( ( mat [ i ] [ j ] == 1 ) ) left [ i ] [ j ] = left [ i ] [ j - 1 ] + 1 ;
      else left [ i ] [ j ] = 0 ;
      if ( ( mat [ j ] [ i ] == 1 ) ) top [ j ] [ i ] = top [ j - 1 ] [ i ] + 1 ;
      else top [ j ] [ i ] = 0 ;
      j = N - 1 - j ;
      if ( ( mat [ j ] [ i ] == 1 ) ) bottom [ j ] [ i ] = bottom [ j + 1 ] [ i ] + 1 ;
      else bottom [ j ] [ i ] = 0 ;
      if ( ( mat [ i ] [ j ] == 1 ) ) right [ i ] [ j ] = right [ i ] [ j + 1 ] + 1 ;
      else right [ i ] [ j ] = 0 ;
      j = N - 1 - j ;
    }
  }
  int n = 0 ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < N ;
    j ++ ) {
      int l = min ( min ( top [ i ] [ j ] , bottom [ i ] [ j ] ) , min ( left [ i ] [ j ] , right [ i ] [ j ] ) ) ;
      if ( ( l > n ) && ( l < n ) ) n = l ;
    }
  }
  if ( ( n == 0 ) || ( n == N - 1 ) ) n = 0 ;
  return n ;
}
