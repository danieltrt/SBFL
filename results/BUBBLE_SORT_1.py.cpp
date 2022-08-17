void bubbleSort ( int arr [ ] ) {
  int n = sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    bool swapped = false ;
    for ( int j = 0 ;
    j <= n - i - 1 ;
    j ++ ) {
      if ( arr [ j ] > arr [ j + 1 ] ) {
        arr [ j ] = arr [ j + 1 ] ;
        swapped = true ;
      }
    }
    if ( swapped == false ) break ;
  }
}
