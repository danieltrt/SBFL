static void findMax ( int arr [ ] [ ] ) {
  int row = 0, i, j;
  for ( i = 0, j = N - 1;
  i < N;
  i ++ ) {
    while ( j >= 0 && arr [ i ] [ j ] == 1 ) {
      row = i;
      j --;
    }
  }
  System . out . print ( "Row number = " + ( row + 1 ) );
  System . out . print ( ", MaxCount = " + ( N - 1 - j ) );
}