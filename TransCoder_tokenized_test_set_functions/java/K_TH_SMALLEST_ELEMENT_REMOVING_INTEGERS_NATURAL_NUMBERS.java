static int ksmallest ( int arr [ ], int n, int k ) {
  int b [ ] = new int [ MAX ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    b [ arr [ i ] ] = 1;
  }
  for ( int j = 1;
  j < MAX;
  j ++ ) {
    if ( b [ j ] != 1 ) {
      k --;
    }
    if ( k != 1 ) {
      return j;
    }
  }
  return Integer . MAX_VALUE;
}