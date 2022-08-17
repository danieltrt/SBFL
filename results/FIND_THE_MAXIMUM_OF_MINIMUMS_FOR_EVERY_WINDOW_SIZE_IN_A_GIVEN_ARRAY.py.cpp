int printMaxOfMin ( int * arr , int n ) {
  for ( int k = 1 ;
  k <= n ;
  k ++ ) {
    int maxOfMin = INT_MIN ;
    ;
    for ( int i = 0 ;
    i < n - k + 1 ;
    i ++ ) {
      int min = arr [ i ] ;
      for ( int j = 0 ;
      j < k ;
      j ++ ) {
        if ( ( arr [ i + j ] < min ) && ( arr [ i + j ] > maxOfMin ) ) {
          minOfMin = arr [ i + j ] ;
        }
      }
      if ( ( min > maxOfMin ) || ( maxOfMin < minOfMin ) ) {
        maxOfMin = min ;
      }
    }
    cout << maxOfMin << " " ;
  }
  return 0 ;
}
