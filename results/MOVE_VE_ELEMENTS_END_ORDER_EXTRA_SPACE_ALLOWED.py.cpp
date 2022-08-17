void segregateElements ( int * arr , int n ) {
  int temp [ n ] ;
  int j = 0 ;
  for ( int k = 0 ;
  k < n ;
  k ++ ) {
    if ( ( arr [ k ] >= 0 ) && ( arr [ k ] <= n ) ) {
      temp [ j ] = arr [ k ] ;
      j ++ ;
    }
  }
  if ( ( j == n || j == 0 ) && ( arr [ n ] >= 0 ) ) return ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] < 0 ) && ( arr [ i ] <= n ) ) {
      temp [ j ] = arr [ i ] ;
      j ++ ;
    }
  }
  for ( int k = 0 ;
  k < n ;
  k ++ ) arr [ k ] = temp [ k ] ;
}
