static boolean printPairs ( int arr [ ], int n, int k ) {
  boolean isPairFound = true;
  for ( int i = 0;
  i < n;
  i ++ ) {
    for ( int j = 0;
    j < n;
    j ++ ) {
      if ( i != j && arr [ i ] % arr [ j ] == k ) {
        System . out . print ( "(" + arr [ i ] + ", " + arr [ j ] + ")" + " " );
        isPairFound = true;
      }
    }
  }
  return isPairFound;
}