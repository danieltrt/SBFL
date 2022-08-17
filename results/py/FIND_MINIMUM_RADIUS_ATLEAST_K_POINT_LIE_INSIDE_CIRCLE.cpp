double f_filled ( int k , double * x , double * y , int n ) {
  double dis [ n ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) dis [ i ] = x [ i ] * x [ i ] + y [ i ] * y [ i ] ;
  std :: sort ( dis , dis + n ) ;
  return dis [ k - 1 ] ;
}
