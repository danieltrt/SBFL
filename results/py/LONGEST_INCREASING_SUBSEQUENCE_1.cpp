int f_filled ( int arr [ ] ) {
  int n = sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  int f_filled [ n ] ;
  f_filled [ 0 ] = 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= i ;
    j ++ ) {
      if ( arr [ i ] > arr [ j ] && f_filled [ i ] < f_filled [ j ] + 1 ) f_filled [ i ] = f_filled [ j ] + 1 ;
    }
  }
  int maximum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) maximum = max ( maximum , f_filled [ i ] ) ;
  return maximum ;
}
