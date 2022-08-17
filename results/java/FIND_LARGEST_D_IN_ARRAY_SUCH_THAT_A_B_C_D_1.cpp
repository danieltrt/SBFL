int f_filled ( int * arr , int n ) {
  unordered_map < int , indexes > map ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) map [ arr [ i ] + arr [ j ] ] = indexes ( i , j ) ;
  }
  int d = INT_MIN ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int abs_diff = abs ( arr [ i ] - arr [ j ] ) ;
      if ( map . count ( abs_diff ) != 0 ) {
        indexes indexes = map [ abs_diff ] ;
        if ( indexes . i != i && indexes . i != j && indexes . j != i && indexes . j != j ) d = max ( d , max ( arr [ i ] , arr [ j ] ) ) ;
      }
    }
  }
  return d ;
}
