int f_filled ( int n ) {
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) sum += i * ( n - i ) ;
  return 2 * sum ;
}
