int maxLen ( int arr [ ] ) {
  int maxLen = 0 ;
  for ( int i = 0 ;
  i < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  i ++ ) {
    int currSum = 0 ;
    for ( int j = i ;
    j < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
    j ++ ) {
      currSum += arr [ j ] ;
      if ( currSum == 0 ) maxLen = max ( maxLen , j - i + 1 ) ;
    }
  }
  return maxLen ;
}
