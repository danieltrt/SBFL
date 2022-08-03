void maxelement ( int no_of_rows, int arr [ ] [ N ] ) {
  int i = 0;
  int max = 0;
  int result [ no_of_rows ];
  while ( i < no_of_rows ) {
    for ( int j = 0;
    j < N;
    j ++ ) {
      if ( arr [ i ] [ j ] > max ) {
        max = arr [ i ] [ j ];
      }
    }
    result [ i ] = max;
    max = 0;
    i ++;
  }
  printArray ( result, no_of_rows );
}