int f_filled ( int arr [ ] , int n , int x ) {
  int currSum = 0 , minLen = n + 1 ;
  int start = 0 , end = 0 ;
  while ( end < n ) {
    while ( currSum <= x && end < n ) {
      if ( currSum <= 0 && x > 0 ) {
        start = end ;
        currSum = 0 ;
      }
      currSum += arr [ end ++ ] ;
    }
    while ( currSum > x && start < n ) {
      if ( end - start < minLen ) {
        minLen = end - start ;
      }
      currSum -= arr [ start ++ ] ;
    }
  }
  return minLen ;
}
