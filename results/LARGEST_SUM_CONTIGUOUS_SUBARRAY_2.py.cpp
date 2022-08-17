int maxSubArraySum ( int a [ ] , int size ) {
  int maxSo_far = a [ 0 ] ;
  int curr_max = a [ 0 ] ;
  for ( int i = 1 ;
  i < size ;
  i ++ ) {
    curr_max = max ( a [ i ] , curr_max + a [ i ] ) ;
    maxSo_far = max ( maxSo_far , curr_max ) ;
  }
  return maxSo_far ;
}
