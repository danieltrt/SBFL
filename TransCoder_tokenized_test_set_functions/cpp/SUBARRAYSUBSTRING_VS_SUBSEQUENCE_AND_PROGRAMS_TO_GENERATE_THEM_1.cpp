void printSubsequences ( int arr [ ], int n ) {
  unsigned int opsize = pow ( 2, n );
  for ( int counter = 1;
  counter < opsize;
  counter ++ ) {
    for ( int j = 0;
    j < n;
    j ++ ) {
      if ( counter & ( 1 << j ) ) cout << arr [ j ] << " ";
    }
    cout << endl;
  }
}