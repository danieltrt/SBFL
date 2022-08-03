void transpose ( int A [ ] [ N ] ) {
  for ( int i = 0;
  i < N;
  i ++ ) for ( int j = i + 1;
  j < N;
  j ++ ) swap ( A [ i ] [ j ], A [ j ] [ i ] );
}