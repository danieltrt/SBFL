void printNGE ( int arr [ ] ) {
  for ( int i = 0 ;
  i < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  i += 1 ) {
    int next = - 1 ;
    for ( int j = i + 1 ;
    j < sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
    j += 1 ) {
      if ( arr [ i ] < arr [ j ] ) {
        next = arr [ j ] ;
        break ;
      }
    }
    cout << arr [ i ] << " -- " << next << endl ;
  }
}
