bool findPairs ( int arr [ ], int n ) {
  map < int, pair < int, int > > Hash;
  for ( int i = 0;
  i < n;
  ++ i ) {
    for ( int j = i + 1;
    j < n;
    ++ j ) {
      int sum = arr [ i ] + arr [ j ];
      if ( Hash . find ( sum ) == Hash . end ( ) ) Hash [ sum ] = make_pair ( i, j );
      else {
        pair < int, int > pp = Hash [ sum ];
        cout << "(" << arr [ pp . first ] << ", " << arr [ pp . second ] << ") and (" << arr [ i ] << ", " << arr [ j ] << ")n";
        return true;
      }
    }
  }
  cout << "No pairs found";
  return false;
}