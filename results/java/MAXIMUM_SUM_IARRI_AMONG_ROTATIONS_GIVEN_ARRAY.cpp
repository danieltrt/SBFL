int f_filled ( int arr [ ] , int n ) {
  int res = INT_MIN ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int currSum = 0 ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      int index = ( i + j ) % n ;
      currSum += j * arr [ index ] ;
    }
    res = max ( res , currSum ) ;
  }
  return res ;
}
