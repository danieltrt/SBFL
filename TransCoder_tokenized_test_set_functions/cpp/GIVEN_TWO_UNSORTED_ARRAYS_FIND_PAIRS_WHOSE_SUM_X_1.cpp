void findPairs ( int arr1 [ ], int arr2 [ ], int n, int m, int x ) {
  unordered_set < int > s;
  for ( int i = 0;
  i < n;
  i ++ ) s . insert ( arr1 [ i ] );
  for ( int j = 0;
  j < m;
  j ++ ) if ( s . find ( x - arr2 [ j ] ) != s . end ( ) ) cout << x - arr2 [ j ] << " " << arr2 [ j ] << endl;
}