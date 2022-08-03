void printAllAPTriplets ( int arr [ ], int n ) {
  unordered_set < int > s;
  for ( int i = 0;
  i < n - 1;
  i ++ ) {
    for ( int j = i + 1;
    j < n;
    j ++ ) {
      int diff = arr [ j ] - arr [ i ];
      if ( s . find ( arr [ i ] - diff ) != s . end ( ) ) cout << arr [ i ] - diff << " " << arr [ i ] << " " << arr [ j ] << endl;
    }
    s . insert ( arr [ i ] );
  }
}