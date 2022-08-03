private static void search ( int [ ] [ ] mat, int n, int x ) {
  int i = 0, j = n - 1;
  while ( i < n && j >= 0 ) {
    if ( mat [ i ] [ j ] == x ) {
      System . out . print ( "n Found at " + i + " " + j );
      return;
    }
    if ( mat [ i ] [ j ] > x ) j --;
    else i ++;
  }
  System . out . print ( "n Element not found" );
  return;
}