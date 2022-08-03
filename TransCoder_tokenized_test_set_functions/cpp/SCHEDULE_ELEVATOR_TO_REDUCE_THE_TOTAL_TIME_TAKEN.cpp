int minTime ( int n, int k, int a [ ] ) {
  sort ( a, a + n, greater < int > ( ) );
  int minTime = 0;
  for ( int i = 0;
  i < n;
  i += k ) minTime += ( 2 * a [ i ] );
  return minTime;
}