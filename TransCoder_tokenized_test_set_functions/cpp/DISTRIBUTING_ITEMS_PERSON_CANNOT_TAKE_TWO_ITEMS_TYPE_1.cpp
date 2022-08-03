bool checkCount ( int arr [ ], int n, int k ) {
  unordered_map < int, int > hash;
  for ( int i = 0;
  i < n;
  i ++ ) hash [ arr [ i ] ] ++;
  for ( auto x : hash ) if ( x . second > 2 * k ) return false;
  return true;
}