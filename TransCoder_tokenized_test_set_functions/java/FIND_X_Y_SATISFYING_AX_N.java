static void solution ( int a, int b, int n ) {
  for ( int i = 0;
  i * a <= n;
  i ++ ) {
    if ( ( n - ( i * a ) ) % b == 0 ) {
      System . out . println ( "x = " + i + ", y = " + ( n - ( i * a ) ) / b );
      return;
    }
  }
  System . out . println ( "No solution" );
}