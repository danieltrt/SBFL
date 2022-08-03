static void minRange ( int arr [ ], int n, int k ) {
  int l = 0, r = n;
  for ( int i = 0;
  i < n;
  i ++ ) {
    Set < Integer > s = new HashSet < Integer > ( );
    int j;
    for ( j = i;
    j < n;
    j ++ ) {
      s . add ( arr [ j ] );
      if ( s . size ( ) == k ) {
        if ( ( j - i ) < ( r - l ) ) {
          r = j;
          l = i;
        }
        break;
      }
    }
    if ( j == n ) break;
  }
  if ( l == 0 && r == n ) System . out . println ( "Invalid k" );
  else System . out . println ( l + " " + r );
}