int maxSubArraySum ( int * a , int size ) {
  int maxSo_far = - INT_MAX - 1 ;
  int maxEndingHere = 0 ;
  int start = 0 ;
  int end = 0 ;
  int s = 0 ;
  for ( int i = 0 ;
  i <= size ;
  i ++ ) {
    maxEndingHere += a [ i ] ;
    if ( maxSo_far < maxEndingHere ) {
      maxSo_far = maxEndingHere ;
      start = s ;
      end = i ;
    }
    if ( maxEndingHere < 0 ) {
      maxEndingHere = 0 ;
      s = i + 1 ;
    }
  }
  cout << "Maximum contiguous sum is " << maxSo_far << endl ;
  cout << "Starting Index " << start << endl ;
  cout << "Ending Index " << end << endl ;
  return maxSo_far ;
}
