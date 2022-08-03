void rotateMatrix ( int mat [ ] [ N ] ) {
  for ( int i = N - 1;
  i >= 0;
  i -- ) {
    for ( int j = N - 1;
    j >= 0;
    j -- ) printf ( "%d ", mat [ i ] [ j ] );
    printf ( "\n" );
  }
}