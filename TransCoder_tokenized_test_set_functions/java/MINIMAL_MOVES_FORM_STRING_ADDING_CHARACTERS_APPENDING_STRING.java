static int minimalSteps ( String s, int n ) {
  int [ ] dp = new int [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) dp [ i ] = Integer . MAX_VALUE;
  String s1 = "", s2 = "";
  dp [ 0 ] = 1;
  s1 += s . charAt ( 0 );
  for ( int i = 1;
  i < n;
  i ++ ) {
    s1 += s . charAt ( i );
    s2 = s . substring ( i + 1, i + 1 );
    dp [ i ] = Math . min ( dp [ i ], dp [ i - 1 ] + 1 );
    if ( s1 == s2 ) dp [ i * 2 + 1 ] = Math . min ( dp [ i ] + 1, dp [ i * 2 + 1 ] );
  }
  return dp [ n - 1 ];
}