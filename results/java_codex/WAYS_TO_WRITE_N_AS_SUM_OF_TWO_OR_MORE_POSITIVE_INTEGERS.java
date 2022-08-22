int countWays ( int n ) {
  int table [ n + 1 ];
  fill ( table, table + n + 1, 0 );
  table [ 0 ] = 1;
  for ( int i = 1;
  i < n;
  i ++ ) for ( int j = i;
  j <= n;
  j ++ ) table [ j ] += table [ j - i ];
  return table [ n ];
}