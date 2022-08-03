static void print ( int n, int k ) {
  int rem = 1;
  for ( int i = 0;
  i < k;
  i ++ ) {
    System . out . print ( ( 10 * rem ) / n );
    rem = ( 10 * rem ) % n;
  }
}