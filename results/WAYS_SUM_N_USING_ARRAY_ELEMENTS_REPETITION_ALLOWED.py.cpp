int countWays ( int arr [ ] , int m , int N ) {
  int count [ N + 1 ] ;
  count [ 0 ] = 1 ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) {
    for ( int j = 0 ;
    j < m ;
    j ++ ) {
      if ( ( i >= arr [ j ] ) && ( i <= arr [ j + 1 ] ) ) {
        count [ i ] += count [ i - arr [ j ] ] ;
      }
    }
  }
  return count [ N ] ;
}
