void swapDiagonal ( int matrix [ ] [ N ] ) {
  for ( int i = 0;
  i < N;
  i ++ ) swap ( matrix [ i ] [ i ], matrix [ i ] [ N - i - 1 ] );
}