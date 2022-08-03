void countFreq ( int a [ ], int n ) {
  unordered_map < int, int > hm;
  for ( int i = 0;
  i < n;
  i ++ ) hm [ a [ i ] ] ++;
  int cumul = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    cumul += hm [ a [ i ] ];
    if ( hm [ a [ i ] ] ) {
      cout << a [ i ] << "->" << cumul << endl;
    }
    hm [ a [ i ] ] = 0;
  }
}