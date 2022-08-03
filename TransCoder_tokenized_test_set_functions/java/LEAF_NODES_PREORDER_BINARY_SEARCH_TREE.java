static void leafNode ( int preorder [ ], int n ) {
  Stack < Integer > s = new Stack < Integer > ( );
  for ( int i = 0, j = 1;
  j < n;
  i ++, j ++ ) {
    boolean found = false;
    if ( preorder [ i ] > preorder [ j ] ) s . push ( preorder [ i ] );
    else {
      while ( ! s . isEmpty ( ) ) {
        if ( preorder [ j ] > s . peek ( ) ) {
          s . pop ( );
          found = true;
        }
        else break;
      }
    }
    if ( found ) System . out . print ( preorder [ i ] + " " );
  }
  System . out . println ( preorder [ n - 1 ] );
}