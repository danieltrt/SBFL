static void printMaxOfMin ( int n ) {
  for ( int k = 1;
  k <= n;
  k ++ ) {
    int maxOfMin = Integer . MIN_VALUE;
    for ( int i = 0;
    i <= n - k;
    i ++ ) {
      int min = arr [ i ];
      for ( int j = 1;
      j < k;
      j ++ ) {
        if ( arr [ i + j ] < min ) min = arr [ i + j ];
      }
      if ( min > maxOfMin ) maxOfMin = min;
    }
    System . out . print ( maxOfMin + " " );
  }
}