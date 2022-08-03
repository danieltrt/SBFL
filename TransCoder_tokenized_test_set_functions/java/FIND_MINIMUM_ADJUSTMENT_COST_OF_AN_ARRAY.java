static int minAdjustmentCost ( int A [ ], int n, int target ) {
  int [ ] [ ] dp = new int [ n ] [ M + 1 ];
  for ( int j = 0;
  j <= M;
  j ++ ) dp [ 0 ] [ j ] = Math . abs ( j - A [ 0 ] );
  for ( int i = 1;
  i < n;
  i ++ ) {
    for ( int j = 0;
    j <= M;
    j ++ ) {
      dp [ i ] [ j ] = Integer . MAX_VALUE;
      int k = Math . max ( j - target, 0 );
      for (;
      k <= Math . min ( M, j + target );
      k ++ ) dp [ i ] [ j ] = Math . min ( dp [ i ] [ j ], dp [ i - 1 ] [ k ] + Math . abs ( A [ i ] - j ) );
    }
  }
  int res = Integer . MAX_VALUE;
  for ( int j = 0;
  j <= M;
  j ++ ) res = Math . min ( res, dp [ n - 1 ] [ j ] );
  return res;
}