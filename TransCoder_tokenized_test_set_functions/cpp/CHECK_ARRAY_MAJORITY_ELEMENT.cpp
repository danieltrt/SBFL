bool isMajority ( int a [ ], int n ) {
  unordered_map < int, int > mp;
  for ( int i = 0;
  i < n;
  i ++ ) mp [ a [ i ] ] ++;
  for ( auto x : mp ) if ( x . second >= n / 2 ) return true;
  return false;
}