int f_filled ( int * arr , int n ) {
  sort ( arr , arr + n ) ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) sum += arr [ i ] * arr [ i ] ;
  return sum ;
}
