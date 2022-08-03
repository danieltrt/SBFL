int findCommon ( int mat [ M ] [ N ] ) {
  unordered_map < int, int > cnt;
  int i, j;
  for ( i = 0;
  i < M;
  i ++ ) {
    cnt [ mat [ i ] [ 0 ] ] ++;
    for ( j = 1;
    j < N;
    j ++ ) {
      if ( mat [ i ] [ j ] != mat [ i ] [ j - 1 ] ) cnt [ mat [ i ] [ j ] ] ++;
    }
  }
  for ( auto ele : cnt ) {
    if ( ele . second == M ) return ele . first;
  }
  return - 1;
}