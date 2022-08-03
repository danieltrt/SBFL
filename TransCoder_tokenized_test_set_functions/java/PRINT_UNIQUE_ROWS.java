public static void printArray ( int arr [ ] [ ], int row, int col ) {
  HashSet < String > set = new HashSet < String > ( );
  for ( int i = 0;
  i < row;
  i ++ ) {
    String s = "";
    for ( int j = 0;
    j < col;
    j ++ ) s += String . valueOf ( arr [ i ] [ j ] );
    if ( ! set . contains ( s ) ) {
      set . add ( s );
      System . out . println ( s );
    }
  }
}