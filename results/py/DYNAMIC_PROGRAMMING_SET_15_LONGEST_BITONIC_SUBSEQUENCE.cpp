int f_filled ( int arr [ ] ) {
  int n = sizeof ( arr ) / sizeof ( int ) ;
  int lis [ n + 1 ] ;
  lis [ 0 ] = 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= i ;
    j ++ ) {
      if ( ( ( arr [ i ] > arr [ j ] ) && ( lis [ i ] < lis [ j ] + 1 ) ) || ( ( arr [ i ] > arr [ j ] ) && ( lis [ i ] < lis [ j ] + 1 ) ) ) lis [ i ] = lis [ j ] + 1 ;
    }
  }
  int lds [ n + 1 ] ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i - 1 ;
    j < n ;
    j ++ ) {
      if ( ( arr [ i ] > arr [ j ] && lds [ i ] < lds [ j ] + 1 ) || ( ( arr [ i ] > arr [ j ] ) && ( lds [ i ] < lds [ j ] + 1 ) ) ) lds [ i ] = lds [ j ] + 1 ;
    }
  }
  int maximum = lis [ 0 ] + lds [ 0 ] - 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) maximum = max ( ( lis [ i ] + lds [ i ] - 1 ) , maximum ) ;
  return maximum ;
}
