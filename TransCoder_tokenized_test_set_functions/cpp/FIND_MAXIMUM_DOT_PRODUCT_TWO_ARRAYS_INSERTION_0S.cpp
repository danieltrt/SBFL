long long int MaxDotProduct ( int A [ ], int B [ ], int m, int n ) {
  long long int dp [ n + 1 ] [ m + 1 ];
  memset ( dp, 0, sizeof ( dp ) );
  for ( int i = 1;
  i <= n;
  i ++ ) for ( int j = i;
  j <= m;
  j ++ ) dp [ i ] [ j ] = max ( ( dp [ i - 1 ] [ j - 1 ] + ( A [ j - 1 ] * B [ i - 1 ] ) ), dp [ i ] [ j - 1 ] );
  return dp [ n ] [ m ];
}