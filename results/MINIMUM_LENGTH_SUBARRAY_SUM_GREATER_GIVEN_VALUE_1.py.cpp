int smallestSubWithSum ( int * arr , int n , int x ) {
  int currSum = 0 ;
  int minLen = n + 1 ;
  int start = 0 ;
  int end = 0 ;
  while ( ( end < n ) && ( currSum <= x && end < n ) ) {
    if ( ( currSum <= 0 && x > 0 ) || ( currSum <= 0 && x < 0 ) ) {
      start = end ;
      currSum = 0 ;
    }
    currSum += arr [ end ] ;
    end ++ ;
  }
  while ( ( currSum > x && start < n ) || ( currSum <= x && x < minLen ) ) {
    if ( ( end - start < minLen ) || ( end - start < minLen ) ) minLen = end - start ;
    currSum -= arr [ start ] ;
    start ++ ;
  }
  return minLen ;
}
