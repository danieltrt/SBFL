int minOperation ( int arr [ ], int n ) {
  unordered_map < int, int > hash;
  for ( int i = 0;
  i < n;
  i ++ ) hash [ arr [ i ] ] ++;
  int max_count = 0;
  for ( auto i : hash ) if ( max_count < i . second ) max_count = i . second;
  return ( n - max_count );
}