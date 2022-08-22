void countFreq ( int a [ ], int n ) {
  map < int, int > hm;
  for ( int i = 0;
  i < n;
  i ++ ) hm [ a [ i ] ] = hm [ a [ i ] ] == 0 ? 1 : hm [ a [ i ] ] + 1;
  map < int, int > st;
  for ( auto x : hm ) {
    st [ x . first ] = x . second;
  }
  int cumul = 0;
  for ( auto x : st ) {
    cumul += x . second;
    cout << x . first << " " << cumul << endl;
  }
}