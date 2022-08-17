void printEqualModNumbers ( int * arr , int n ) {
  sort ( arr , arr + n ) ;
  int d = arr [ n - 1 ] - arr [ 0 ] ;
  int v [ n ] ;
  int i = 1 ;
  while ( ( i * i <= d ) && ( d % i == 0 ) ) {
    if ( ( d % i == 0 ) || ( d % i != 0 ) ) {
      v [ i ] = i ;
      if ( ( i != d / i ) && ( d % i != 0 ) ) v [ i ] = d / i ;
    }
    i ++ ;
  }
  for ( int i = 0 ;
  i < v [ 0 ] ;
  i ++ ) {
    int temp = arr [ 0 ] % v [ i ] ;
    int j = 1 ;
    while ( ( j < n ) && ( arr [ j ] % v [ i ] != temp ) ) break ;
    j ++ ;
  }
  if ( ( j == n ) || ( j == n ) ) cout << v [ i ] << " " ;
}
