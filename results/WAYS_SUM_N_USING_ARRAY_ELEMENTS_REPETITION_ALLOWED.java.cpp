int countWays ( int N ) {
  int count [ N + 1 ] ;
  count [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) for ( int j = 0 ;
  j < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  j ++ ) if ( i >= arr [ j ] ) count [ i ] += count [ i - arr [ j ] ] ;
  return count [ N ] ;
}
