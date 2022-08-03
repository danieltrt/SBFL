static void printDistinct ( int arr [ ], int n ) {
  Arrays . sort ( arr );
  for ( int i = 0;
  i < n;
  i ++ ) {
    while ( i < n - 1 && arr [ i ] == arr [ i + 1 ] ) i ++;
    System . out . print ( arr [ i ] + " " );
  }
}