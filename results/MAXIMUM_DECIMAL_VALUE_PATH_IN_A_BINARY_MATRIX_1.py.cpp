int MaximumDecimalValue ( int * * mat , int n ) {
  int * * dp = new int * [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    dp [ i ] = new int [ n ] ;
    if ( ( mat [ 0 ] [ 0 ] == 1 ) && ( mat [ 0 ] [ 0 ] == 1 ) ) dp [ 0 ] [ 0 ] = 1 ;
    for ( int i = 1 ;
    i < n ;
    i ++ ) {
      if ( ( mat [ 0 ] [ i ] == 1 ) && ( mat [ 0 ] [ i - 1 ] == 1 ) ) dp [ 0 ] [ i ] = dp [ 0 ] [ i - 1 ] + 2 * * i ;
      else dp [ 0 ] [ i ] = dp [ 0 ] [ i - 1 ] ;
    }
    for ( int i = 1 ;
    i < n ;
    i ++ ) {
      if ( ( mat [ i ] [ 0 ] == 1 ) && ( mat [ i - 1 ] [ 0 ] == 1 ) ) dp [ i ] [ 0 ] = dp [ i - 1 ] [ 0 ] + 2 * * i ;
    }
  }
  else dp [ i ] [ 0 ] = dp [ i - 1 ] [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = 1 ;
    j < n ;
    j ++ ) {
      if ( ( mat [ i ] [ j ] == 1 ) && ( mat [ i ] [ j - 1 ] == 1 ) ) dp [ i ] [ j ] = max ( dp [ i ] [ j - 1 ] , dp [ i - 1 ] [ j ] ) + ( 2 * * ( i + j ) ) ;
      else dp [ i ] [ j ] = max ( dp [ i ] [ j - 1 ] , dp [ i - 1 ] [ j ] ) ;
    }
  }
  delete [ ] dp ;
  return dp [ n - 1 ] [ n - 1 ] ;
}
