int findDiff ( int arr [ ], int n ) {
  unordered_map < int, int > hm;
  for ( int i = 0;
  i < n;
  i ++ ) hm [ arr [ i ] ] ++;
  int max_count = 0, min_count = n;
  for ( auto x : hm ) {
    max_count = max ( max_count, x . second );
    min_count = min ( min_count, x . second );
  }
  return ( max_count - min_count );
}