int findMaxValue ( int * * mat ) {
  int maxValue = - INT_MAX - 1 ;
  int * * maxArr = new int * [ N ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < N ;
    j ++ ) {
      if ( ( mat [ N - 1 ] [ j ] > maxv ) || ( maxArr [ N - 1 ] [ j ] == maxv ) ) maxArr [ N - 1 ] [ j ] = maxv ;
    }
    maxv = mat [ N - 1 ] [ N - 1 ] ;
    for ( int i = N - 2 ;
    i >= 0 ;
    i -- ) {
      if ( ( mat [ i ] [ N - 1 ] > maxv ) || ( maxArr [ i ] [ N - 1 ] == maxv ) ) maxArr [ i ] [ N - 1 ] = maxv ;
    }
    for ( int i = N - 2 ;
    i >= 0 ;
    i -- ) {
      for ( int j = N - 2 ;
      j >= 0 ;
      j -- ) {
        if ( ( maxArr [ i + 1 ] [ j + 1 ] - mat [ i ] [ j ] > maxValue ) || ( maxArr [ i + 1 ] [ j + 1 ] == maxv ) ) maxValue = ( maxArr [ i + 1 ] [ j + 1 ] - mat [ i ] [ j ] ) ;
        maxArr [ i ] [ j ] = max ( mat [ i ] [ j ] , max ( maxArr [ i ] [ j + 1 ] , maxArr [ i + 1 ] [ j ] ) ) ;
      }
    }
  }
  return maxValue ;
}
