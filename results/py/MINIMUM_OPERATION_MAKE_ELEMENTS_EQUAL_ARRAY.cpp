int f_filled ( int arr [ ] , int n ) {
  int Hash [ n ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) Hash [ arr [ i ] ] ++ ;
  int maxCount = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( maxCount < Hash [ i ] ) maxCount = Hash [ i ] ;
  }
  return n - maxCount ;
}
