int minimumSquare ( int m, int n ) {
  int vertical_min = INT_MAX;
  int horizontal_min = INT_MAX;
  if ( m == n ) return 1;
  if ( dp [ m ] [ n ] ) return dp [ m ] [ n ];
  for ( int i = 1;
  i <= m / 2;
  i ++ ) {
    horizontal_min = min ( minimumSquare ( i, n ) + minimumSquare ( m - i, n ), horizontal_min );
  }
  for ( int j = 1;
  j <= n / 2;
  j ++ ) {
    vertical_min = min ( minimumSquare ( m, j ) + minimumSquare ( m, n - j ), vertical_min );
  }
  dp [ m ] [ n ] = min ( vertical_min, horizontal_min );
  return dp [ m ] [ n ];
}