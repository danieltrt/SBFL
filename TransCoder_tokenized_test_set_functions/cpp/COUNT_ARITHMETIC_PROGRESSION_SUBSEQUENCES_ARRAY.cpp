int numofAP ( int a [ ], int n ) {
  int minarr = INT_MAX, maxarr = INT_MIN;
  for ( int i = 0;
  i < n;
  i ++ ) {
    minarr = min ( minarr, a [ i ] );
    maxarr = max ( maxarr, a [ i ] );
  }
  int dp [ n ], sum [ MAX ];
  int ans = n + 1;
  for ( int d = ( minarr - maxarr );
  d <= ( maxarr - minarr );
  d ++ ) {
    memset ( sum, 0, sizeof sum );
    for ( int i = 0;
    i < n;
    i ++ ) {
      dp [ i ] = 1;
      if ( a [ i ] - d >= 1 && a [ i ] - d <= 1000000 ) dp [ i ] += sum [ a [ i ] - d ];
      ans += dp [ i ] - 1;
      sum [ a [ i ] ] += dp [ i ];
    }
  }
  return ans;
}