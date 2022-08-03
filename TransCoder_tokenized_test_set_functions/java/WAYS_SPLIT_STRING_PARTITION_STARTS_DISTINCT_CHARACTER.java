static int countWays ( String s ) {
  int count [ ] = new int [ 26 ];
  for ( int i = 0;
  i < s . length ( );
  i ++ ) count [ s . charAt ( i ) - 'a' ] ++;
  count [ s . charAt ( 0 ) - 'a' ] = 1;
  int ans = 1;
  for ( int i = 0;
  i < 26;
  ++ i ) if ( count [ i ] != 0 ) ans *= count [ i ];
  return ans;
}