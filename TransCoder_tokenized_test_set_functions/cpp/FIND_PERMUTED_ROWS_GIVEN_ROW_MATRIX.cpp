void permutatedRows ( int mat [ ] [ MAX ], int m, int n, int r ) {
  unordered_set < int > s;
  for ( int j = 0;
  j < n;
  j ++ ) s . insert ( mat [ r ] [ j ] );
  for ( int i = 0;
  i < m;
  i ++ ) {
    if ( i == r ) continue;
    int j;
    for ( j = 0;
    j < n;
    j ++ ) if ( s . find ( mat [ i ] [ j ] ) == s . end ( ) ) break;
    if ( j != n ) continue;
    cout << i << ", ";
  }
}