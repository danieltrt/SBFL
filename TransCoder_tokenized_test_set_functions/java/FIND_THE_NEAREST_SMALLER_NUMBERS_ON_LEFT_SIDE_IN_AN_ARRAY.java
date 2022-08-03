static void printPrevSmaller ( int [ ] arr, int n ) {
  System . out . print ( "_, " );
  for ( int i = 1;
  i < n;
  i ++ ) {
    int j;
    for ( j = i - 1;
    j >= 0;
    j -- ) {
      if ( arr [ j ] < arr [ i ] ) {
        System . out . print ( arr [ j ] + ", " );
        break;
      }
    }
    if ( j == - 1 ) System . out . print ( "_, " );
  }
}