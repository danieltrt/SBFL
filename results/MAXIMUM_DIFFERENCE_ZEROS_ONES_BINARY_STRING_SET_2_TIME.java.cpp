int findLength ( string str , int n ) {
  int currentSum = 0 ;
  int maxSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    currentSum += ( str [ i ] == '0' ? 1 : - 1 ) ;
    if ( currentSum < 0 ) currentSum = 0 ;
    maxSum = max ( currentSum , maxSum ) ;
  }
  return maxSum == 0 ? - 1 : maxSum ;
}
