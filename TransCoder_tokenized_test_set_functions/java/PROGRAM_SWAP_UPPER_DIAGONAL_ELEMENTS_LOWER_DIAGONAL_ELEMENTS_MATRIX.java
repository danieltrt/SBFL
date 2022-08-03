static void swapUpperToLower ( int arr [ ] [ ] ) {
  for ( int i = 0;
  i < n;
  i ++ ) {
    for ( int j = i + 1;
    j < n;
    j ++ ) {
      int temp = arr [ i ] [ j ];
      arr [ i ] [ j ] = arr [ j ] [ i ];
      arr [ j ] [ i ] = temp;
    }
  }
  for ( int i = 0;
  i < n;
  i ++ ) {
    for ( int j = 0;
    j < n;
    j ++ ) System . out . print ( arr [ i ] [ j ] + " " );
    System . out . println ( );
  }
}