void findMissing ( int a [ ], int b [ ], int n, int m ) {
  unordered_set < int > s;
  for ( int i = 0;
  i < m;
  i ++ ) s . insert ( b [ i ] );
  for ( int i = 0;
  i < n;
  i ++ ) if ( s . find ( a [ i ] ) == s . end ( ) ) cout << a [ i ] << " ";
}