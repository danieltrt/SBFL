int minSumPath ( int * * A ) {
  int * memo = new int [ sizeof ( int ) ] ;
  int n = sizeof ( int ) - 1 ;
  for ( int i = 0 ;
  i < sizeof ( int ) ;
  i ++ ) memo [ i ] = A [ n ] [ i ] ;
  for ( int i = sizeof ( int ) - 2 ;
  i >= 0 ;
  i -- ) {
    for ( int j = 0 ;
    j < sizeof ( int ) ;
    j ++ ) memo [ j ] = A [ i ] [ j ] + min ( memo [ j ] , memo [ j + 1 ] ) ;
    ;
  }
  return memo [ 0 ] ;
}
