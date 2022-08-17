int f_filled ( int n , int k , int * a ) {
  sort ( a , a + k ) ;
  int f_filled = 0 ;
  for ( int i = 0 ;
  i < n ;
  i += k ) f_filled += ( 2 * a [ i ] ) ;
  return f_filled ;
}
