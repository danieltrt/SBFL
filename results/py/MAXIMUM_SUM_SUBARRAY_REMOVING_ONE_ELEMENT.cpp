int f_filled ( int arr [ ] , int n ) {
  int fw [ n ] ;
  int bw [ n ] ;
  int curMax , maxSo_far ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    curMax = max ( arr [ i ] , curMax + arr [ i ] ) ;
    maxSo_far = max ( maxSo_far , curMax ) ;
    fw [ i ] = curMax ;
  }
  curMax = maxSo_far = bw [ n - 1 ] = arr [ n - 1 ] ;
  int i = n - 2 ;
  while ( i >= 0 ) {
    curMax = max ( arr [ i ] , curMax + arr [ i ] ) ;
    maxSo_far = max ( maxSo_far , curMax ) ;
    bw [ i ] = curMax ;
    i -- ;
  }
  int fans = maxSo_far ;
  for ( int i = 1 ;
  i < n - 1 ;
  i ++ ) {
    fans = max ( fans , fw [ i - 1 ] + bw [ i + 1 ] ) ;
  }
  return fans ;
}
