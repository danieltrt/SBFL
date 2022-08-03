static void findPair ( int [ ] arr, int n ) {
  boolean found = false;
  for ( int i = 0;
  i < n;
  i ++ ) {
    for ( int j = i + 1;
    j < n;
    j ++ ) {
      for ( int k = 0;
      k < n;
      k ++ ) {
        if ( arr [ i ] + arr [ j ] == arr [ k ] ) {
          System . out . println ( arr [ i ] + " " + arr [ j ] );
          found = true;
        }
      }
    }
  }
  if ( found == false ) System . out . println ( "Not exist" );
}