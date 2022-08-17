void printDistinct ( int arr [ ] ) {
  set < int > set ;
  for ( int i = 0 ;
  i < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  i ++ ) {
    if ( ! set . count ( arr [ i ] ) ) {
      set . insert ( arr [ i ] ) ;
      cout << arr [ i ] << " " ;
    }
  }
}
