int largestSubset ( int a [ ], int n ) {
  sort ( a, a + n );
  int dp [ n ];
  dp [ n - 1 ] = 1;
  for ( int i = n - 2;
  i >= 0;
  i -- ) {
    int mxm = 0;
    for ( int j = i + 1;
    j < n;
    j ++ ) if ( a [ j ] % a [ i ] == 0 ) mxm = max ( mxm, dp [ j ] );
    dp [ i ] = 1 + mxm;
  }
  return * max_element ( dp, dp + n );
}