int maxOnesIndex ( int arr [ ] , int n ) {
  int maxCount = 0 ;
  int maxIndex = 0 ;
  int prevZero = - 1 ;
  int prevPrevZero = - 1 ;
  for ( int curr = 0 ;
  curr < n ;
  curr ++ ) {
    if ( ( arr [ curr ] == 0 ) && ( arr [ curr ] > prevZero ) ) {
      if ( ( curr - prevPrevZero > maxCount ) ) {
        maxCount = curr - prevPrevZero ;
        maxIndex = prevZero ;
      }
      prevPrevZero = prevZero ;
      prevZero = curr ;
    }
  }
  if ( ( n - prevPrevZero > maxCount ) ) maxIndex = prevZero ;
  return maxIndex ;
}
