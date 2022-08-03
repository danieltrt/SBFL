static void groupElements ( int arr [ ], int n ) {
  boolean visited [ ] = new boolean [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    visited [ i ] = false;
  }
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( ! visited [ i ] ) {
      System . out . print ( arr [ i ] + " " );
      for ( int j = i + 1;
      j < n;
      j ++ ) {
        if ( arr [ i ] == arr [ j ] ) {
          System . out . print ( arr [ i ] + " " );
          visited [ j ] = true;
        }
      }
    }
  }
}