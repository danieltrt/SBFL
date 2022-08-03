void findMax ( int arr [ ] [ N ] ) {
  int row = 0, i, j;
  for ( i = 0, j = N - 1;
  i < N;
  i ++ ) {
    while ( arr [ i ] [ j ] == 1 && j >= 0 ) {
      row = i;
      j --;
    }
  }
  cout << "Row number = " << row + 1;
  cout << ", MaxCount = " << N - 1 - j;
}