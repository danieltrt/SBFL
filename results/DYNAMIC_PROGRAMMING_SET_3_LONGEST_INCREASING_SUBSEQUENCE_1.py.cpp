int lis ( int arr [ ] ) {
  int n = sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  int lis [ n ] ;
  lis [ 0 ] = 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= i ;
    j ++ ) {
      if ( arr [ i ] > arr [ j ] && lis [ i ] < lis [ j ] + 1 ) lis [ i ] = lis [ j ] + 1 ;
    }
  }
  int maximum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) maximum = max ( maximum , lis [ i ] ) ;
  return maximum ;
}
