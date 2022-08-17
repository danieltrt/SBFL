void countWaysToJump ( int arr [ ] , int n ) {
  int countJump [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int i = n - 2 ;
    i >= 0 ;
    i -- ) {
      if ( ( arr [ i ] >= n - i - 1 ) && ( arr [ i ] <= arr [ i ] + i ) ) {
        countJump [ i ] ++ ;
      }
      int j = i + 1 ;
      while ( ( j < n - 1 ) && ( j <= arr [ i ] + i ) ) {
        if ( ( countJump [ j ] != - 1 ) ) {
          countJump [ i ] += countJump [ j ] ;
        }
        j ++ ;
      }
      if ( ( countJump [ i ] == 0 ) && ( countJump [ i ] == 0 ) ) {
        countJump [ i ] = - 1 ;
      }
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cout << countJump [ i ] << " " ;
  }
}
