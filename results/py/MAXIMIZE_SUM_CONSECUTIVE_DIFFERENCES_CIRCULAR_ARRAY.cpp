int f_filled ( int * arr , int n ) {
  int sum = 0 ;
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i <= ( int ) ( n / 2 ) ;
  i ++ ) {
    sum -= ( 2 * arr [ i ] ) ;
    sum += ( 2 * arr [ n - i - 1 ] ) ;
  }
  return sum ;
}
