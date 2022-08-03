static int minCells ( int mat [ ] [ ], int m, int n ) {
  int dp [ ] [ ] = new int [ m ] [ n ];
  for ( int i = 0;
  i < m;
  i ++ ) for ( int j = 0;
  j < n;
  j ++ ) dp [ i ] [ j ] = Integer . MAX_VALUE;
  dp [ 0 ] [ 0 ] = 1;
  for ( int i = 0;
  i < m;
  i ++ ) {
    for ( int j = 0;
    j < n;
    j ++ ) {
      if ( dp [ i ] [ j ] != Integer . MAX_VALUE && ( j + mat [ i ] [ j ] ) < n && ( dp [ i ] [ j ] + 1 ) < dp [ i ] [ j + mat [ i ] [ j ] ] ) dp [ i ] [ j + mat [ i ] [ j ] ] = dp [ i ] [ j ] + 1;
      if ( dp [ i ] [ j ] != Integer . MAX_VALUE && ( i + mat [ i ] [ j ] ) < m && ( dp [ i ] [ j ] + 1 ) < dp [ i + mat [ i ] [ j ] ] [ j ] ) dp [ i + mat [ i ] [ j ] ] [ j ] = dp [ i ] [ j ] + 1;
    }
  }
  if ( dp [ m - 1 ] [ n - 1 ] != Integer . MAX_VALUE ) return dp [ m - 1 ] [ n - 1 ];
  return - 1;
}