int countIslands ( int mat [ ] [ N ] ) {
  int count = 0;
  for ( int i = 0;
  i < M;
  i ++ ) {
    for ( int j = 0;
    j < N;
    j ++ ) {
      if ( mat [ i ] [ j ] == 'X' ) {
        if ( ( i == 0 || mat [ i - 1 ] [ j ] == 'O' ) && ( j == 0 || mat [ i ] [ j - 1 ] == 'O' ) ) count ++;
      }
    }
  }
  return count;
}