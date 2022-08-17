int maxSum ( int * arr ) {
  int arrSum = 0 ;
  int currVal = 0 ;
  int n = arr -> length ( ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    arrSum = arrSum + arr -> charAt ( i ) ;
    currVal = currVal + ( i * arr -> charAt ( i ) ) ;
  }
  int maxVal = currVal ;
  for ( int j = 1 ;
  j <= n ;
  j ++ ) {
    currVal = currVal + arrSum - n * arr -> charAt ( n - j ) ;
    if ( currVal > maxVal ) maxVal = currVal ;
  }
  return maxVal ;
}
