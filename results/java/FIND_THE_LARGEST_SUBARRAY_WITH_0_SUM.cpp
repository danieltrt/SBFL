int f_filled ( int arr [ ] , int n ) {
  int f_filled = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int currSum = 0 ;
    for ( int j = i ;
    j < n ;
    j ++ ) {
      currSum += arr [ j ] ;
      if ( currSum == 0 ) {
        f_filled = max ( f_filled , j - i + 1 ) ;
      }
    }
  }
  return f_filled ;
}
