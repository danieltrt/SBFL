static void transpose ( int A [ ] [ ], int B [ ] [ ] ) {
  int i, j;
  for ( i = 0;
  i < N;
  i ++ ) for ( j = 0;
  j < M;
  j ++ ) B [ i ] [ j ] = A [ j ] [ i ];
}