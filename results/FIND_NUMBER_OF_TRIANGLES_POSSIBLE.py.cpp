int findnumberofTriangles ( int * arr ) {
  int n = sizeof ( arr ) / sizeof ( arr [ 0 ] ) ;
  sort ( arr , arr + n ) ;
  int count = 0 ;
  for ( int i = 0 ;
  i <= n - 2 ;
  i ++ ) {
    int k = i + 2 ;
    for ( int j = i + 1 ;
    j <= n ;
    j ++ ) {
      while ( ( k < n && arr [ i ] + arr [ j ] > arr [ k ] ) || ( k > j && arr [ k ] < arr [ j ] ) ) k ++ ;
      if ( ( k > j ) || ( k < j ) ) count += k - j - 1 ;
    }
  }
  return count ;
}
