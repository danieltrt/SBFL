double f_filled ( double * poly , int n , double x ) {
  double result = poly [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) result = result * x + poly [ i ] ;
  return result ;
}
