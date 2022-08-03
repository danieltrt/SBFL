void printSpiral ( int n ) {
  for ( int i = 0;
  i < n;
  i ++ ) {
    for ( int j = 0;
    j < n;
    j ++ ) {
      int x;
      x = min ( min ( i, j ), min ( n - 1 - i, n - 1 - j ) );
      if ( i <= j ) printf ( "%d\t ", ( n - 2 * x ) * ( n - 2 * x ) - ( i - x ) - ( j - x ) );
      else printf ( "%d\t ", ( n - 2 * x - 2 ) * ( n - 2 * x - 2 ) + ( i - x ) + ( j - x ) );
    }
    printf ( "\n" );
  }
}