int f_filled ( int arr [ ] , int n ) {
  int res = 1 ;
  for ( int i = 0 ;
  i < n && arr [ i ] <= res ;
  i ++ ) {
    res = res + arr [ i ] ;
  }
  return res ;
}
