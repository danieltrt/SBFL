void arrayEvenAndOdd ( int arr [ ], int n ) {
  int i = - 1, j = 0;
  int t;
  while ( j != n ) {
    if ( arr [ j ] % 2 == 0 ) {
      i ++;
      swap ( arr [ i ], arr [ j ] );
    }
    j ++;
  }
  for ( int i = 0;
  i < n;
  i ++ ) cout << arr [ i ] << " ";
}