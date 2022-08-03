bool areSumSame ( int a [ ] [ MAX ], int n, int m ) {
  int sum1 = 0, sum2 = 0;
  for ( int i = 0;
  i < n;
  i ++ ) {
    sum1 = 0, sum2 = 0;
    for ( int j = 0;
    j < m;
    j ++ ) {
      sum1 += a [ i ] [ j ];
      sum2 += a [ j ] [ i ];
    }
    if ( sum1 == sum2 ) return true;
  }
  return false;
}