int solve ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  int a = 0 ;
  ;
  int b = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( i % 2 != 0 ) && ( arr [ i ] != 0 ) ) a = a * 10 + arr [ i ] ;
    else b = b * 10 + arr [ i ] ;
  }
  return a + b ;
}
