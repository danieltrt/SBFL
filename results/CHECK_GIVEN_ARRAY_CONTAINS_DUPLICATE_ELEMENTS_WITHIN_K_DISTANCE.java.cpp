bool checkDuplicatesWithinK ( int arr [ ] , int k ) {
  set < int > set ;
  for ( int i = 0 ;
  i < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  i ++ ) {
    if ( set . count ( arr [ i ] ) ) return true ;
    set . insert ( arr [ i ] ) ;
    if ( i >= k ) set . erase ( arr [ i - k ] ) ;
  }
  return false ;
}
