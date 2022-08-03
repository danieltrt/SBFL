static void printMat ( int degseq [ ], int n ) {
  int [ ] [ ] mat = new int [ n ] [ n ];
  for ( int i = 0;
  i < n;
  i ++ ) {
    for ( int j = i + 1;
    j < n;
    j ++ ) {
      if ( degseq [ i ] > 0 && degseq [ j ] > 0 ) {
        degseq [ i ] --;
        degseq [ j ] --;
        mat [ i ] [ j ] = 1;
        mat [ j ] [ i ] = 1;
      }
    }
  }
  System . out . print ( "\n" + setw ( 3 ) + "     " );
  for ( int i = 0;
  i < n;
  i ++ ) System . out . print ( setw ( 3 ) + "(" + i + ")" );
  System . out . print ( "\n\n" );
  for ( int i = 0;
  i < n;
  i ++ ) {
    System . out . print ( setw ( 4 ) + "(" + i + ")" );
    for ( int j = 0;
    j < n;
    j ++ ) System . out . print ( setw ( 5 ) + mat [ i ] [ j ] );
    System . out . print ( "\n" );
  }
}