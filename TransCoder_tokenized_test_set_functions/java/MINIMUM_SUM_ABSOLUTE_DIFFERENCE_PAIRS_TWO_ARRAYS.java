static long findMinSum ( long a [ ], long b [ ], long n ) {
  Arrays . sort ( a );
  Arrays . sort ( b );
  long sum = 0;
  for ( int i = 0;
  i < n;
  i ++ ) sum = sum + Math . abs ( a [ i ] - b [ i ] );
  return sum;
}