public static void ZigZag ( int rows, int columns, int numbers [ ] ) {
  int k = 0;
  int [ ] [ ] arr = new int [ rows ] [ columns ];
  for ( int i = 0;
  i < rows;
  i ++ ) {
    if ( i % 2 == 0 ) {
      for ( int j = 0;
      j < columns && numbers [ k ] > 0;
      j ++ ) {
        arr [ i ] [ j ] = k + 1;
        numbers [ k ] --;
        if ( numbers [ k ] == 0 ) k ++;
      }
    }
    else {
      for ( int j = columns - 1;
      j >= 0 && numbers [ k ] > 0;
      j -- ) {
        arr [ i ] [ j ] = k + 1;
        numbers [ k ] --;
        if ( numbers [ k ] == 0 ) k ++;
      }
    }
  }
  for ( int i = 0;
  i < rows;
  i ++ ) {
    for ( int j = 0;
    j < columns;
    j ++ ) System . out . print ( arr [ i ] [ j ] + " " );
    System . out . println ( );
  }
}