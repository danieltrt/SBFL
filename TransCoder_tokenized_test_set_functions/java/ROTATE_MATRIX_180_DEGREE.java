static void rotateMatrix ( int mat [ ] [ ] ) {
  for ( int i = N - 1;
  i >= 0;
  i -- ) {
    for ( int j = N - 1;
    j >= 0;
    j -- ) System . out . print ( mat [ i ] [ j ] + " " );
    System . out . println ( );
  }
}