int difference ( int * * arr , int n ) {
  int d1 = 0 ;
  int d2 = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    for ( int j = 0 ;
    j <= n ;
    j ++ ) {
      if ( ( i == j ) && ( arr [ i ] [ j ] != 0 ) ) d1 += arr [ i ] [ j ] ;
      if ( ( i == n - j - 1 ) && ( arr [ i ] [ j ] != 0 ) ) d2 += arr [ i ] [ j ] ;
    }
  }
  return abs ( d1 - d2 ) ;
}
