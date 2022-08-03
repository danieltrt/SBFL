static void constructTree ( int n, int d, int h ) {
  if ( d == 1 ) {
    if ( n == 2 && h == 1 ) {
      System . out . println ( "1 2" );
      return;
    }
    System . out . println ( "-1" );
    return;
  }
  if ( d > 2 * h ) {
    System . out . println ( "-1" );
    return;
  }
  for ( int i = 1;
  i <= h;
  i ++ ) System . out . println ( i + " " + ( i + 1 ) );
  if ( d > h ) {
    System . out . println ( "1" + " " + ( h + 2 ) );
    for ( int i = h + 2;
    i <= d;
    i ++ ) {
      System . out . println ( i + " " + ( i + 1 ) );
    }
  }
  for ( int i = d + 1;
  i < n;
  i ++ ) {
    int k = 1;
    if ( d == h ) k = 2;
    System . out . println ( k + " " + ( i + 1 ) );
  }
}