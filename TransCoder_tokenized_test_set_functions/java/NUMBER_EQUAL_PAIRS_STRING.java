static int countPairs ( String s ) {
  int cnt [ ] = new int [ MAX ];
  for ( int i = 0;
  i < s . length ( );
  i ++ ) cnt [ s . charAt ( i ) ] ++;
  int ans = 0;
  for ( int i = 0;
  i < MAX;
  i ++ ) ans += cnt [ i ] * cnt [ i ];
  return ans;
}