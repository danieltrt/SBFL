static void squareRoot ( int n, int p ) {
  n = n % p;
  for ( int x = 2;
  x < p;
  x ++ ) {
    if ( ( x * x ) % p == n ) {
      System . out . println ( "Square " + "root is " + x );
      return;
    }
  }
  System . out . println ( "Square root " + "doesn't exist" );
}