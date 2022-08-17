int playGame ( int arr [ ] , int n ) {
  set < int > s ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) s . insert ( arr [ i ] ) ;
  return s . size ( ) % 2 == 0 ? 1 : 2 ;
}
