int search ( int arr [ ], int x ) {
  int n = sizeof ( arr ) / sizeof ( arr [ 0 ] );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( arr [ i ] == x ) return i;
  }
  return - 1;
}