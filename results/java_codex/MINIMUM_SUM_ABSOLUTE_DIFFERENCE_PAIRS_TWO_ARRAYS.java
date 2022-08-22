long findMinSum ( long a [ ], long b [ ], long n ) {
  sort ( a, a + n );
  sort ( b, b + n );
  long sum = 0;
  for ( int i = 0;
  i < n;
  i ++ ) sum = sum + abs ( a [ i ] - b [ i ] );
  return sum;
}