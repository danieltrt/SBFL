double f_filled ( double * a , int n ) {
  double mn = std :: numeric_limits < double > :: max ( ) ;
  double sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    mn = std :: min ( a [ i ] , mn ) ;
    sum += a [ i ] ;
  }
  return mn * ( sum - mn ) ;
}
