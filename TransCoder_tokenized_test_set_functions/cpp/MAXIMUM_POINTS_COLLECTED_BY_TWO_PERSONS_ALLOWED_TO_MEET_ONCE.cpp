int findMaxPoints ( int A [ ] [ M ] ) {
  int P1S [ M + 1 ] [ N + 1 ], P1E [ M + 1 ] [ N + 1 ];
  memset ( P1S, 0, sizeof ( P1S ) );
  memset ( P1E, 0, sizeof ( P1E ) );
  int P2S [ M + 1 ] [ N + 1 ], P2E [ M + 1 ] [ N + 1 ];
  memset ( P2S, 0, sizeof ( P2S ) );
  memset ( P2E, 0, sizeof ( P2E ) );
  for ( int i = 1;
  i <= N;
  i ++ ) for ( int j = 1;
  j <= M;
  j ++ ) P1S [ i ] [ j ] = max ( P1S [ i - 1 ] [ j ], P1S [ i ] [ j - 1 ] ) + A [ i - 1 ] [ j - 1 ];
  for ( int i = N;
  i >= 1;
  i -- ) for ( int j = M;
  j >= 1;
  j -- ) P1E [ i ] [ j ] = max ( P1E [ i + 1 ] [ j ], P1E [ i ] [ j + 1 ] ) + A [ i - 1 ] [ j - 1 ];
  for ( int i = N;
  i >= 1;
  i -- ) for ( int j = 1;
  j <= M;
  j ++ ) P2S [ i ] [ j ] = max ( P2S [ i + 1 ] [ j ], P2S [ i ] [ j - 1 ] ) + A [ i - 1 ] [ j - 1 ];
  for ( int i = 1;
  i <= N;
  i ++ ) for ( int j = M;
  j >= 1;
  j -- ) P2E [ i ] [ j ] = max ( P2E [ i - 1 ] [ j ], P2E [ i ] [ j + 1 ] ) + A [ i - 1 ] [ j - 1 ];
  int ans = 0;
  for ( int i = 2;
  i < N;
  i ++ ) {
    for ( int j = 2;
    j < M;
    j ++ ) {
      int op1 = P1S [ i ] [ j - 1 ] + P1E [ i ] [ j + 1 ] + P2S [ i + 1 ] [ j ] + P2E [ i - 1 ] [ j ];
      int op2 = P1S [ i - 1 ] [ j ] + P1E [ i + 1 ] [ j ] + P2S [ i ] [ j - 1 ] + P2E [ i ] [ j + 1 ];
      ans = max ( ans, max ( op1, op2 ) );
    }
  }
  return ans;
}