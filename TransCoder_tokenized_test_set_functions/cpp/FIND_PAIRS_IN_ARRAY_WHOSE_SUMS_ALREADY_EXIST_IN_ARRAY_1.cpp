void findPair ( int arr [ ], int n ) {
  unordered_set < int > s;
  for ( int i = 0;
  i < n;
  i ++ ) s . insert ( arr [ i ] );
  bool found = false;
  for ( int i = 0;
  i < n;
  i ++ ) {
    for ( int j = i + 1;
    j < n;
    j ++ ) {
      if ( s . find ( arr [ i ] + arr [ j ] ) != s . end ( ) ) {
        cout << arr [ i ] << " " << arr [ j ] << endl;
        found = true;
      }
    }
  }
  if ( found == false ) cout << "Not exist" << endl;
}