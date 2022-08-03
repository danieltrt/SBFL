void printDistinct ( int arr [ ], int n ) {
  unordered_set < int > s;
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( s . find ( arr [ i ] ) == s . end ( ) ) {
      s . insert ( arr [ i ] );
      cout << arr [ i ] << " ";
    }
  }
}