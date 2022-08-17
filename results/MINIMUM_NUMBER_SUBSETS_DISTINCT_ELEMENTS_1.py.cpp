int subset ( int arr [ ] , int n ) {
  int mp [ 10 ] ;
  for ( int i = 0 ;
  i < 10 ;
  i ++ ) mp [ i ] = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) mp [ arr [ i ] ] ++ ;
  int res = 0 ;
  for ( int i = 0 ;
  i < 10 ;
  i ++ ) res = max ( res , arr [ i ] ) ;
  return res ;
}
