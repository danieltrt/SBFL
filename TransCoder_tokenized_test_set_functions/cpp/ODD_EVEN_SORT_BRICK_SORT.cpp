void oddEvenSort ( int arr [ ], int n ) {
  bool isSorted = false;
  while ( ! isSorted ) {
    isSorted = true;
    for ( int i = 1;
    i <= n - 2;
    i = i + 2 ) {
      if ( arr [ i ] > arr [ i + 1 ] ) {
        swap ( arr [ i ], arr [ i + 1 ] );
        isSorted = false;
      }
    }
    for ( int i = 0;
    i <= n - 2;
    i = i + 2 ) {
      if ( arr [ i ] > arr [ i + 1 ] ) {
        swap ( arr [ i ], arr [ i + 1 ] );
        isSorted = false;
      }
    }
  }
  return;
}