int MaximumPath ( int * * Mat ) {
  int result = 0 ;
  int * * dp = new int * [ N + 2 ] ;
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < N ;
    j ++ ) {
      dp [ i ] [ j ] = max ( dp [ i - 1 ] [ j - 1 ] , max ( dp [ i - 1 ] [ j ] , dp [ i - 1 ] [ j + 1 ] ) ) + Mat [ i ] [ j - 1 ] ;
    }
  }
  for ( int i = 0 ;
  i < N + 1 ;
  i ++ ) result = max ( result , dp [ N - 1 ] [ i ] ) ;
  return result ;
}
