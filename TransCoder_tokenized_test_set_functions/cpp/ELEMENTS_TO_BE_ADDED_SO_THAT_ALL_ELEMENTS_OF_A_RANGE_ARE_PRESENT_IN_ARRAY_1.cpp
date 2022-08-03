int countNum ( int arr [ ], int n ) {
  unordered_set < int > s;
  int count = 0, maxm = INT_MIN, minm = INT_MAX;
  for ( int i = 0;
  i < n;
  i ++ ) {
    s . insert ( arr [ i ] );
    if ( arr [ i ] < minm ) minm = arr [ i ];
    if ( arr [ i ] > maxm ) maxm = arr [ i ];
  }
  for ( int i = minm;
  i <= maxm;
  i ++ ) if ( s . find ( arr [ i ] ) == s . end ( ) ) count ++;
  return count;
}