int minSum ( int ar [ ] , int n ) {
  if ( n <= 4 ) return std :: min ( ar [ 0 ] , ar [ 1 ] ) ;
  int sum [ n ] ;
  sum [ 0 ] = ar [ 0 ] ;
  sum [ 1 ] = ar [ 1 ] ;
  sum [ 2 ] = ar [ 2 ] ;
  sum [ 3 ] = ar [ 3 ] ;
  for ( int i = 4 ;
  i < n ;
  i ++ ) {
    sum [ i ] = ar [ i ] + std :: min ( std :: min ( sum [ i - 4 ] , i ) , ar [ i ] ) ;
  }
  return std :: min ( std :: min ( sum [ n - 4 ] , n ) , ar [ n ] ) ;
}
